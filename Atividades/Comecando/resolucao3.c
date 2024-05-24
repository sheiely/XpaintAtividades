#define XPAINT
#include "xpaint.h"
int largura = 600, altura = 600;

int main() {

  create(largura, altura, "exemplo3");
  background("0, 0, 0");
  stroke("green");
  strokeWeight(5);

  line(0, 600, 600, 0);
  save();
  destroy();
  return 0;
}
