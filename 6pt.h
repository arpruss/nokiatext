const uint8_t FONT_MAX_WIDTH = 8;
const uint8_t FONT_HEIGHT = 6;
const uint8_t font_widths[] = {
 2,
 2,
 4,
 6,
 4,
 8,
 6,
 2,
 3,
 3,
 4,
 4,
 4,
 4,
 2,
 4,
 4,
 4,
 4,
 4,
 4,
 4,
 4,
 4,
 4,
 4,
 2,
 3,
 3,
 4,
 3,
 4,
 7,
 4,
 4,
 4,
 4,
 4,
 4,
 4,
 4,
 2,
 4,
 4,
 4,
 5,
 4,
 4,
 4,
 4,
 4,
 4,
 4,
 4,
 4,
 6,
 4,
 4,
 4,
 3,
 4,
 3,
 4,
 4,
 3,
 4,
 4,
 4,
 4,
 4,
 3,
 4,
 4,
 2,
 3,
 4,
 2,
 6,
 4,
 4,
 4,
 4,
 4,
 4,
 4,
 4,
 4,
 6,
 4,
 4,
 4,
 4,
 2,
 4,
 5,
};

const uint8_t font_data[][FONT_MAX_WIDTH] = {
  {0x00,0x00,}, /*   */
  {0x17,0x00,}, /* ! */
  {0x03,0x00,0x03,0x00,}, /* " */
  {0x1a,0x0e,0x1b,0x0e,0x0b,0x00,}, /* # */
  {0x16,0x3f,0x1a,0x00,}, /* $ */
  {0x06,0x15,0x0b,0x04,0x1a,0x15,0x0c,0x00,}, /* % */
  {0x0a,0x15,0x11,0x0c,0x04,0x00,}, /* & */
  {0x03,0x00,}, /* ' */
  {0x0e,0x11,0x00,}, /* ( */
  {0x11,0x0e,0x00,}, /* ) */
  {0x15,0x0e,0x15,0x00,}, /* * */
  {0x04,0x0e,0x04,0x00,}, /* + */
  {0x20,0x10,0x00,0x00,}, /* , */
  {0x04,0x04,0x04,0x00,}, /* - */
  {0x10,0x00,}, /* . */
  {0x18,0x04,0x03,0x00,}, /* / */
  {0x1f,0x11,0x1f,0x00,}, /* 0 */
  {0x12,0x1f,0x10,0x00,}, /* 1 */
  {0x1d,0x15,0x17,0x00,}, /* 2 */
  {0x15,0x15,0x1f,0x00,}, /* 3 */
  {0x07,0x04,0x1f,0x00,}, /* 4 */
  {0x17,0x15,0x1d,0x00,}, /* 5 */
  {0x1f,0x15,0x1d,0x00,}, /* 6 */
  {0x03,0x01,0x1f,0x00,}, /* 7 */
  {0x1f,0x15,0x1f,0x00,}, /* 8 */
  {0x17,0x15,0x1f,0x00,}, /* 9 */
  {0x12,0x00,}, /* : */
  {0x20,0x12,0x00,}, /* ; */
  {0x04,0x0a,0x00,}, /* < */
  {0x0a,0x0a,0x0a,0x00,}, /* = */
  {0x0a,0x04,0x00,}, /* > */
  {0x01,0x15,0x02,0x00,}, /* ? */
  {0x0e,0x15,0x2b,0x2f,0x29,0x16,0x00,}, /* @ */
  {0x1e,0x05,0x1f,0x00,}, /* A */
  {0x1f,0x15,0x1e,0x00,}, /* B */
  {0x0e,0x11,0x11,0x00,}, /* C */
  {0x1f,0x11,0x1e,0x00,}, /* D */
  {0x1f,0x15,0x11,0x00,}, /* E */
  {0x1f,0x05,0x01,0x00,}, /* F */
  {0x1e,0x11,0x1d,0x00,}, /* G */
  {0x1f,0x04,0x1f,0x00,}, /* H */
  {0x1f,0x00,}, /* I */
  {0x10,0x10,0x0f,0x00,}, /* J */
  {0x1f,0x04,0x1b,0x00,}, /* K */
  {0x1f,0x10,0x10,0x00,}, /* L */
  {0x1f,0x02,0x02,0x1f,0x00,}, /* M */
  {0x1f,0x01,0x1e,0x00,}, /* N */
  {0x0e,0x11,0x0e,0x00,}, /* O */
  {0x1f,0x05,0x06,0x00,}, /* P */
  {0x0e,0x11,0x2e,0x00,}, /* Q */
  {0x1f,0x05,0x1a,0x00,}, /* R */
  {0x16,0x15,0x0d,0x00,}, /* S */
  {0x01,0x1f,0x01,0x00,}, /* T */
  {0x1f,0x10,0x1f,0x00,}, /* U */
  {0x0f,0x10,0x0f,0x00,}, /* V */
  {0x0f,0x10,0x0f,0x10,0x0f,0x00,}, /* W */
  {0x1b,0x04,0x1b,0x00,}, /* X */
  {0x03,0x1c,0x03,0x00,}, /* Y */
  {0x19,0x15,0x13,0x00,}, /* Z */
  {0x1f,0x11,0x00,}, /* [ */
  {0x03,0x04,0x18,0x00,}, /* \ */
  {0x11,0x1f,0x00,}, /* ] */
  {0x02,0x01,0x02,0x00,}, /* ^ */
  {0x10,0x10,0x10,0x00,}, /* _ */
  {0x01,0x02,0x00,}, /* ` */
  {0x0c,0x12,0x1e,0x00,}, /* a */
  {0x1f,0x12,0x1c,0x00,}, /* b */
  {0x0c,0x12,0x12,0x00,}, /* c */
  {0x1c,0x12,0x1f,0x00,}, /* d */
  {0x0c,0x1a,0x16,0x00,}, /* e */
  {0x1e,0x05,0x00,}, /* f */
  {0x2c,0x2a,0x1e,0x00,}, /* g */
  {0x1f,0x02,0x1c,0x00,}, /* h */
  {0x1d,0x00,}, /* i */
  {0x20,0x1d,0x00,}, /* j */
  {0x1f,0x04,0x1a,0x00,}, /* k */
  {0x1f,0x00,}, /* l */
  {0x1e,0x02,0x1c,0x02,0x1c,0x00,}, /* m */
  {0x1e,0x02,0x1c,0x00,}, /* n */
  {0x0c,0x12,0x0c,0x00,}, /* o */
  {0x3e,0x12,0x1c,0x00,}, /* p */
  {0x1c,0x12,0x3e,0x00,}, /* q */
  {0x1e,0x04,0x02,0x00,}, /* r */
  {0x14,0x16,0x0a,0x00,}, /* s */
  {0x02,0x0f,0x12,0x00,}, /* t */
  {0x0e,0x10,0x1e,0x00,}, /* u */
  {0x0e,0x10,0x0e,0x00,}, /* v */
  {0x1e,0x10,0x0e,0x10,0x0e,0x00,}, /* w */
  {0x12,0x0c,0x12,0x00,}, /* x */
  {0x26,0x18,0x0e,0x00,}, /* y */
  {0x1a,0x16,0x12,0x00,}, /* z */
  {0x04,0x1b,0x11,0x00,}, /* { */
  {0x1b,0x00,}, /* | */
  {0x11,0x1b,0x04,0x00,}, /* } */
  {0x08,0x04,0x08,0x04,0x00,}, /* ~ */
};
