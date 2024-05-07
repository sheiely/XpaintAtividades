#define XPAINT
#include "xpaint.h"

int largura = 600, altura = 600;
// 

int main() {
  open(largura, altura, "Questao 3");
  background("0, 0, 0");
  // vermelho
  stroke("255, 51, 90");
  strokeWeight(25);
  arc(260, 310, 125, 0, 90, 270);
  strokeWeight(25);
  line(310, 310, 310, 185);
  strokeWeight(29);
  arc(360, 185, 125, 0, 180, 90);
  // azul
  stroke("16, 242, 232");
  strokeWeight(25);
  arc(240, 290, 125, 0, 90, 270);
  strokeWeight(25);
  line(290, 290, 290, 165);
  strokeWeight(29);
  arc(340, 165, 125, 0, 180, 90);
  // branco
  stroke("255, 255, 255");
  strokeWeight(25);
  arc(250, 300, 125, 0, 90, 270);
  strokeWeight(25);
  line(300, 300, 300, 175);
  strokeWeight(29);
  arc(350, 175, 125, 0, 180, 90);
  save();
  close();
  return 0;
  // paia
}
