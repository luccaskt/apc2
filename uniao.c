#include <stdio.h>

typedef union pixel Pixel;

typedef union pixel2 Pixel2;

union pixel{
  unsigned int color;
  unsigned char rgba[4];
};

typedef struct {
 unsigned char a;
 unsigned char b;
 unsigned char g;
 unsigned char r;
 } RGBA;

union pixel2{
  unsigned int color;
  RGBA rgba;
};

int main(void) {
  Pixel p1;
  p1.color = 0x01020304;
  printf("(%d, %d, %d, %d)\n"
  , p1.rgba[0]
  , p1.rgba[1]
  , p1.rgba[2]  
  , p1.rgba[3]);

  Pixel2 p2;
  p2.color = 0x01020304;
  printf("(%d, %d, %d, %d)\n"
  , p2.rgba.r
  , p2.rgba.g
  , p2.rgba.b
  , p2.rgba.a);

  return 0;
}