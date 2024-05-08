#define XPAINT
#include "xpaint.h"
#include <stdio.h>
#include <string.h>

int largura = 600, altura = 600;
//

int main() {
  open(largura, altura, "quadrado");
  char forma[50];
  scanf("%s", forma);
  if (strcmp(forma, "quadrado") == 0) {
    square(width() / 2-150, height() / 2-150, 300);
  } else if (strcmp(forma, "circulo") == 0) {
    circle(width()/2, height()/2, 300);
  }else if (strcmp(forma, "triangulo") == 0) {
    triangle(width()/2 , height()/2-150, width()/2-150 , height()/2+150, width()/2+150 , height()/2+150);
  }else{
    printf("Figura inválida\n");
  }
  save();
  close();
  return 0;
  // paia
}
