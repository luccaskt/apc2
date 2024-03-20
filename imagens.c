#include <stdio.h>
#include <stdlib.h>

#define WIDHT 10
#define HEIGHT 10

typedef struct {
  unsigned char r, g, b;

} Pixel;

void drawX(Pixel *image, int widht, int height) {
  for(int i = 0; i < height; i++) {
    for(int j = 0; j < widht; j++) {
      if (i == j || i == height - 1 - j) {
        Pixel *pixel = &image[i * widht + j];
        pixel ->r = 0;
        pixel ->g = 0;
        pixel ->b = 255;
      }
    }
  }
}

void drawBorder(Pixel *image, int widht, int height) {
  for(int i = 0; i < height; i++) {
    for(int j = 0; j < widht; j++) {
      if(i == 0 || i == height - 1 || j == 0 || j == widht - 1) {
        Pixel *pixel = &image[i * widht + j];
        pixel ->r = 255;
        pixel ->g = 0;
        pixel ->b = 0;
      }
    }
  }
}

void overlayImages(Pixel *background, Pixel *overlay, int widht, int height) {
  for(int i = 0; i <  height; i++) {
    for(int j = 0; j < widht; j++) {
      Pixel *bgPixel = &background[i * widht +j];
      Pixel *ovPixel = &overlay[i * widht + j];
      if(ovPixel->r != 255 || ovPixel->g != 255 || ovPixel->b != 255) {
        bgPixel->r = ovPixel->r;
        bgPixel->g = ovPixel->g;
        bgPixel->b = ovPixel->b;
      }
    }
  }
}

void printImage(Pixel *image, int widht, int height) {
  for(int i = 0; i < height; i++) {
    for(int j = 0; j < widht; j++) {
      Pixel *pixel = &image[i * widht + j];
      printf("(%3d,%3d,%3d)", pixel->r, pixel->g, pixel->b);
    }
    printf("\n");
  }
}
int main() {

  Pixel *image1 = (Pixel*)malloc(WIDHT * HEIGHT * sizeof(Pixel));
  Pixel *image2 = (Pixel*)malloc(WIDHT * HEIGHT * sizeof(Pixel));

  drawX(image1, WIDHT, HEIGHT);
  printf("Imagem 1 (X):\n");
  printImage(image1, WIDHT, HEIGHT);
  printf("\n");

  drawBorder(image2, WIDHT, HEIGHT);
  printf("Imegem 2 (Borda):\n");
  printImage(image2, WIDHT, HEIGHT);
  printf("\n");

  overlayImages(image1, image2, WIDHT, HEIGHT);
  printf("Imagem final (sobreposiçao de X e borda): \n");
  printImage(image1, WIDHT, HEIGHT);

  free(image1);
  free(image2);
  

}