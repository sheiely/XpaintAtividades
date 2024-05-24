#define XPAINT
#include "xpaint.h"
int largura = 600, altura = 600;


int main() {
  create(largura, altura, "exemplo2");
  background("0, 0, 0");
  stroke("white");
  fill("blue");
  strokeWeight(5);
  circle(300, 300, 400);
  
  save();
  destroy();

  return 0;
}
