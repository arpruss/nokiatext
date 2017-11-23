from fonts import FONTS
import sys

f = FONTS[sys.argv[1]]

maxWidth = max(f[i][0] for i in range(32,127))
height = len(f[32][3])
print("""const uint8_t FONT_MAX_WIDTH = %u;
const uint8_t FONT_HEIGHT = %u;
const uint8_t font_widths[] = {""" % (maxWidth,height));
for i in range(32,127):
    print(" %u," % f[i][0])
print("""};

const uint8_t font_data[][FONT_MAX_WIDTH] = {""");
for i in range(32,127):
    out = "  {"
    width = f[i][0]
    for x in range(width):
        v = 0
        for y in range(height):
            if f[i][3][y] & (1<<(f[i][0]-1-x)):
                v |= 1<<y
        out += "0x%02x," % v
    print(out + "}, /* %c */" % chr(i))
print("};\n")
