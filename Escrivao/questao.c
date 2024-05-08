#define XPAINT
#include "xpaint.h"
#include <stdio.h>
#include <string.h>

int largura = 600, altura = 600;

int main() {
  open(largura, altura, "main4");
  stroke("white");
  textSize(64);
  char forma[50];
  scanf("%s", forma);
  text(width() / 2 - (strlen(forma) * 32) / 2, height() / 2 - 64, "%s", forma);
  save();
  close();

  return 0;
}
