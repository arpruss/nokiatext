// Font by Ron Buelow
// "use the fonts any way you wish, as always credit the source as applicable"

template<typename T> int draw_6pt(T tft, const char* text, int x, int y, int color) {
  int x0 = x;
  while(*text) {
    switch(*text) {
    case 32:
      x+=2;
      break;
    case 33:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+0, y+4, color);
      x+=2;
      break;
    case 34:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      x+=4;
      break;
    case 35:
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+4, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+1, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+3, y+1, color);
      tft.drawPixel(x+4, y+1, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+3, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+1, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+3, y+3, color);
      tft.drawPixel(x+4, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=6;
      break;
    case 36:
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+1, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+1, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      tft.drawPixel(x+1, y+5, color);
      x+=4;
      break;
    case 37:
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+5, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+4, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+3, y+2, color);
      tft.drawPixel(x+5, y+2, color);
      tft.drawPixel(x+6, y+2, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+4, y+3, color);
      tft.drawPixel(x+6, y+3, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+4, y+4, color);
      tft.drawPixel(x+5, y+4, color);
      x+=8;
      break;
    case 38:
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+3, y+2, color);
      tft.drawPixel(x+4, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+3, y+3, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=6;
      break;
    case 39:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      x+=2;
      break;
    case 40:
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+1, y+4, color);
      x+=3;
      break;
    case 41:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+1, y+1, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+1, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      x+=3;
      break;
    case 42:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+1, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+1, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 43:
      tft.drawPixel(x+1, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+1, y+3, color);
      x+=4;
      break;
    case 44:
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+0, y+5, color);
      x+=4;
      break;
    case 45:
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      x+=4;
      break;
    case 46:
      tft.drawPixel(x+0, y+4, color);
      x+=2;
      break;
    case 47:
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      x+=4;
      break;
    case 48:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 49:
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+1, y+1, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+1, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 50:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 51:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 52:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 53:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 54:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 55:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 56:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 57:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 58:
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+0, y+4, color);
      x+=2;
      break;
    case 59:
      tft.drawPixel(x+1, y+1, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+0, y+5, color);
      x+=3;
      break;
    case 60:
      tft.drawPixel(x+1, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+1, y+3, color);
      x+=3;
      break;
    case 61:
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+1, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+1, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      x+=4;
      break;
    case 62:
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      x+=3;
      break;
    case 63:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+1, y+4, color);
      x+=4;
      break;
    case 64:
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+3, y+0, color);
      tft.drawPixel(x+4, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+3, y+1, color);
      tft.drawPixel(x+5, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+3, y+2, color);
      tft.drawPixel(x+5, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+3, y+3, color);
      tft.drawPixel(x+4, y+3, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+5, y+4, color);
      tft.drawPixel(x+2, y+5, color);
      tft.drawPixel(x+3, y+5, color);
      tft.drawPixel(x+4, y+5, color);
      x+=7;
      break;
    case 65:
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 66:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 67:
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 68:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 69:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 70:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      x+=4;
      break;
    case 71:
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 72:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 73:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      x+=2;
      break;
    case 74:
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+1, y+4, color);
      x+=4;
      break;
    case 75:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 76:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 77:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+3, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+1, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+3, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+3, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+3, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+3, y+4, color);
      x+=5;
      break;
    case 78:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 79:
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+1, y+4, color);
      x+=4;
      break;
    case 80:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      x+=4;
      break;
    case 81:
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+2, y+5, color);
      x+=4;
      break;
    case 82:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 83:
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+1, y+4, color);
      x+=4;
      break;
    case 84:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+1, y+1, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+1, y+3, color);
      tft.drawPixel(x+1, y+4, color);
      x+=4;
      break;
    case 85:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 86:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+1, y+4, color);
      x+=4;
      break;
    case 87:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+4, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+4, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+4, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+4, y+3, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+3, y+4, color);
      x+=6;
      break;
    case 88:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 89:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+1, y+3, color);
      tft.drawPixel(x+1, y+4, color);
      x+=4;
      break;
    case 90:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 91:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+1, y+4, color);
      x+=3;
      break;
    case 92:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 93:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+1, y+1, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+1, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+1, y+4, color);
      x+=3;
      break;
    case 94:
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      x+=4;
      break;
    case 95:
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 96:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+1, y+1, color);
      x+=3;
      break;
    case 97:
      tft.drawPixel(x+1, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 98:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+1, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 99:
      tft.drawPixel(x+1, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 100:
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+1, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 101:
      tft.drawPixel(x+1, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+1, y+3, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 102:
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      x+=3;
      break;
    case 103:
      tft.drawPixel(x+1, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+1, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+2, y+4, color);
      tft.drawPixel(x+0, y+5, color);
      tft.drawPixel(x+1, y+5, color);
      x+=4;
      break;
    case 104:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+1, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 105:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      x+=2;
      break;
    case 106:
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+1, y+3, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+0, y+5, color);
      x+=3;
      break;
    case 107:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 108:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      x+=2;
      break;
    case 109:
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+1, y+1, color);
      tft.drawPixel(x+3, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+4, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+4, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      tft.drawPixel(x+4, y+4, color);
      x+=6;
      break;
    case 110:
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+1, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 111:
      tft.drawPixel(x+1, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+1, y+4, color);
      x+=4;
      break;
    case 112:
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+1, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      tft.drawPixel(x+0, y+5, color);
      x+=4;
      break;
    case 113:
      tft.drawPixel(x+1, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      tft.drawPixel(x+2, y+5, color);
      x+=4;
      break;
    case 114:
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      x+=4;
      break;
    case 115:
      tft.drawPixel(x+1, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+1, y+4, color);
      x+=4;
      break;
    case 116:
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+1, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+1, y+3, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 117:
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 118:
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+1, y+4, color);
      x+=4;
      break;
    case 119:
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+4, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+4, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+4, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+3, y+4, color);
      x+=6;
      break;
    case 120:
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+1, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 121:
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+1, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+0, y+5, color);
      x+=4;
      break;
    case 122:
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+1, y+1, color);
      tft.drawPixel(x+2, y+1, color);
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 123:
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+2, y+0, color);
      tft.drawPixel(x+1, y+1, color);
      tft.drawPixel(x+0, y+2, color);
      tft.drawPixel(x+1, y+3, color);
      tft.drawPixel(x+1, y+4, color);
      tft.drawPixel(x+2, y+4, color);
      x+=4;
      break;
    case 124:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+0, y+1, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      x+=2;
      break;
    case 125:
      tft.drawPixel(x+0, y+0, color);
      tft.drawPixel(x+1, y+0, color);
      tft.drawPixel(x+1, y+1, color);
      tft.drawPixel(x+2, y+2, color);
      tft.drawPixel(x+1, y+3, color);
      tft.drawPixel(x+0, y+4, color);
      tft.drawPixel(x+1, y+4, color);
      x+=4;
      break;
    case 126:
      tft.drawPixel(x+1, y+2, color);
      tft.drawPixel(x+3, y+2, color);
      tft.drawPixel(x+0, y+3, color);
      tft.drawPixel(x+2, y+3, color);
      x+=5;
      break;
    }
    text++;
  }
  return x - x0;
}

