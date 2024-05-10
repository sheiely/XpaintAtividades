#define XPAINT
#include "xpaint.h"
int largura = 600, altura = 600;

/*
Atividade 4 - Desenhe a logo dos X-men
Os X-men te contrataram para refazer sua logo, mas infelizmente o mundo está em uma
catastofre pois o magneto destruiu todos os programas de edição do mundo, e
agora seu dever é refazer a logo usando C. Dica: Use 2 ciruclos e 2 linhas
*/

int main() {
  xopen(600, 600, "exemplos/Questao 1");
  
  fill("red");
  circle(300, 300, 400);
  setFill(rgba(220, 220, 0, 255));
  circle(300, 300, 300);
  stroke("red");
  strokeWeight(50);
  line(440, 440, 160, 160);
  line(160, 440, 440, 160);

  save();
  xclose();
  return 0;
}
