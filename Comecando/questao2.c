#define XPAINT
#include "xpaint.h"
int largura = 600, altura = 600;

/*
Atividade 2 - Desenhe um circulo
Nessa atividade voce deve criar uma imagem com um circulo AZUL
de raio 200 no meio da tela
*/

int main() {
  xopen(largura, altura, "exemplos/Questao 2");
  background(BLACK);
  stroke(WHITE);
  fill(BLUE);
  strokeWeight(5);
  circle(300, 300, 400);
  
  save();
  xclose();

  return 0;
}
