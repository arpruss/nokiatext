#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>

#define REMAP_SPI1 // MOSI PB5, MISO PB4, SCK PB3, NSS PA8 (!!)
#define SCREEN_WIDTH 84
#define SCREEN_HEIGHT 48
#define TEXT_HEIGHT 6
#define NUM_LINES (SCREEN_HEIGHT/TEXT_HEIGHT)
#include "6pt.h" 
#include "draw6pt.cpp"

Adafruit_PCD8544 display = Adafruit_PCD8544(PB3, PB5, PB0, PB1, PB11);
//Adafruit_PCD8544 display = Adafruit_PCD8544(PB0, PB1, PB11); // warning: MISO=PA6 is input, NSS=PA4 is output

template<bool shiftLeft, bool invert>void writePartialLine(char* text, unsigned xStart, unsigned xEnd, unsigned line, unsigned shift) {
  uint8_t* out = pcd8544_buffer+line*SCREEN_WIDTH + xStart;
  uint8_t* end = out + xEnd;
  uint8_t mask = shiftLeft ? ((1<<TEXT_HEIGHT)-1)<<shift : ((1<<TEXT_HEIGHT)-1)>>shift;
  if (!invert)
    mask = ~mask;
  while (out < end && *text) {
    uint8_t c = *text++;
    if (c < 32 || c > 126) 
      c = 0;
    else
      c -= 32;
    uint8_t width = font_widths[c];
    const uint8_t* f = font_data[c];
    do {
      if (invert) {
        if (shiftLeft) 
          *out = (*out | mask) ^ (*f << shift);
        else
          *out = (*out | mask) ^ (*f >> shift);
      }
      else {
        if (shiftLeft) 
          *out = (*out & mask) | (*f << shift);
        else
          *out = (*out & mask) | (*f >> shift);
      }
      width--;
      f++;
      out++;
    }
    while (width && out < end);
  }
  while (out < end) {
    if (invert) {
      *out |= mask;
    }
    else {
      *out &= mask;
    }
    out++;
  }  
}

void writeText(char* text, unsigned xStart, unsigned xEnd, unsigned y, bool invert) {
  if (xStart >= SCREEN_WIDTH || y >= SCREEN_HEIGHT || xStart >= xEnd)
    return;
  if (xEnd >= SCREEN_WIDTH)
    xEnd = SCREEN_WIDTH;
  unsigned line1 = y>>3;
  unsigned modulus = y%0x7;
  if (invert)
    writePartialLine<true,true>(text, xStart, xEnd, line1, modulus);
  else
    writePartialLine<true,false>(text, xStart, xEnd, line1, modulus);
  line1++;
  if (modulus>8-TEXT_HEIGHT && line1 < (SCREEN_HEIGHT>>3)) {
    if(invert)
      writePartialLine<false,true>(text, xStart, xEnd, line1, 7-modulus);
    else
      writePartialLine<false,false>(text, xStart, xEnd, line1, 7-modulus);
  }
  updateBoundingBox(xStart, y, xEnd, y+TEXT_HEIGHT-1);
}

void writeLine2(char*s , int number, bool invert) {
  writeText(s, 0, SCREEN_WIDTH, number*TEXT_HEIGHT, invert);
}

void writeLine(char* s, int number, bool invert) {
  int y = number * TEXT_HEIGHT;
  uint8_t mask;
  int ybyte;
  updateBoundingBox(0, y, SCREEN_WIDTH, y+TEXT_HEIGHT-1);
  if (!invert) 
    for (int i=0; i<TEXT_HEIGHT; i++) {
      mask = ~ ( 1 << ((y+i) % 8) );
      ybyte = (y+i) / 8 * SCREEN_WIDTH;
      for (int x=0; x < SCREEN_WIDTH; x++)
        pcd8544_buffer[ybyte+x] &= mask;
    }
   else
    for (int i=0; i<TEXT_HEIGHT; i++) {
      mask = 1 << ((y+i) % 8);
      ybyte = (y+i) / 8 * SCREEN_WIDTH;
      for (int x=0; x < SCREEN_WIDTH; x++)
        pcd8544_buffer[ybyte+x] |= mask;
    }
  //updateBoundingBox(0,y,SCREEN_WIDTH-1,y+TEXT_HEIGHT);
  //display.fillRect(0,number * TEXT_HEIGHT,SCREEN_WIDTH,TEXT_HEIGHT, invert?1:0);
  draw_6pt(display, s, 0, y+1, invert?0:1);  
}

void setup() {
#ifdef REMAP_SPI1  
  afio_cfg_debug_ports(AFIO_DEBUG_SW_ONLY); // release PB3 and PB5 
  afio_remap(AFIO_REMAP_SPI1); 
  
  gpio_set_mode(GPIOB, 3, GPIO_AF_OUTPUT_PP);
  gpio_set_mode(GPIOB, 4, GPIO_INPUT_FLOATING);
  gpio_set_mode(GPIOB, 5, GPIO_AF_OUTPUT_PP);
#endif
  
  display.begin(40,5);
}

uint32_t t0,t1,t2,t3,t4;
boolean rev = false;
void loop() {
  t0 = micros();
  display.clearDisplay();
  display.display();
  t1 = micros();
  writeLine2("joystick (2 sli.), 0.64x rot", 0, rev);
  t2 = micros();
  writeLine2("Jetset Radio joystick", 1,!rev);
  t3 = micros();
  display.display();
  t4 = micros();
  Serial.println(String(t1-t0)+" "+String(t2-t1)+" "+String(t3-t2)+" "+String(t4-t3));
  delay(1000);
  rev = ! rev;
}
// 2484 410 380 840
// 2460 50 83 834