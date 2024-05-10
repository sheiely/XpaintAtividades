#define XPAINT
#include "xpaint.h"

int largura = 600, altura = 600;

int main() {
  xopen(largura, altura, "exemplos/Questao 2");
  
  fill("white");
  circle(300, 350, 30);
  arc(300, 350, 130, 40, 45, 90);
  arc(300, 350, 230, 40, 45, 90);
  arc(300, 350, 330, 40, 45, 90);

  save();
  xclose();
  return 0;

}
