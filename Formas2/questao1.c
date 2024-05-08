#define XPAINT
#include "xpaint.h"
#include <stdio.h>
#include <string.h>

int largura = 600, altura = 600;

int main() {
  open(largura, altura, "main3");
  while (1) {
    int x, y, size;
    char forma[50];
    scanf("%s", forma);
    if (strcmp(forma, "stop") == 0) {
      break;
    }
    if (strcmp(forma, "quadrado") == 0) {
      scanf("%d%d%d", &x, &y, &size);
      square(x-size/2, y-size/2, size);
    } else if (strcmp(forma, "circulo") == 0) {
      scanf("%d%d%d", &x, &y, &size);
      circle(x, y, size);
    } else if (strcmp(forma, "triangulo") == 0) {
      scanf("%d%d%d", &x, &y, &size);
      triangle(x, y - size / 2, x + size / 2, y + size / 2, x - size / 2,
               y + size / 2);
    } else {
      printf("Forma invalida\n");
      continue;
    }
    save();
  }
  
  close();
  return 0;
  // paia
}
