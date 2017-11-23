from fonts import FONTS
import sys

def generateCases(font, charSet):
    lines = []
    for i in charSet:
        if i in font:
            width, offset, delta, bitmap = font[i]
            lines.append('    case %d:' % i)
#            lines.append('      if (color>=0) {')
            
            for y in range(len(bitmap)):
                for x in range(width):
                    if bitmap[y] & (1<<(width-1-x)):
                        dx = x+offset
                        dy = y
                        lines.append('      tft.drawPixel(x+%d, y+%d, color);' % (dx,dy))
                        
#            lines.append('      }')
            lines.append("      x+=%d;" % delta)
            lines.append('      break;')
    return '\n'.join(lines)

fontName = sys.argv[1]

if fontName not in FONTS:
    print("Font "+font+" not found.")
    sys.exit(1)
font = FONTS[fontName]

if len(sys.argv) < 3:
    charSet0 = " -~"
else:
    charSet0 = sys.argv[2]
charSet = []
i = 0
while i < len(charSet0):
    if charSet0[i] == "-" and i > 0:
        for j in range(ord(charSet0[i-1])+1, ord(charSet0[i+1])+1):
            if j not in charSet:
                charSet.append(j)
        i += 2
        continue
    if ord(charSet0[i]) not in charSet:
        charSet.append( ord(charSet0[i]) )
    i += 1

charSet = sorted(charSet)

print("""// Font by Ron Buelow
// "use the fonts any way you wish, as always credit the source as applicable"

template<typename T> int draw_%s(T tft, const char* text, int x, int y, int color) {
  int x0 = x;
  while(*text) {
    switch(*text) {
%s
    }
    text++;
  }
  return x - x0;
}
""" % (fontName, generateCases(font, charSet)))
