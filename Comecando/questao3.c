#define XPAINT
#include "xpaint.h"
int largura = 600, altura = 600;

/*
Atividade 3 - Desenhe uma reta diagonal 
Nessa atividade voce deve criar uma imagem com uma reta diagonal VERDE ligando
o canto inferior esquerdo da imagem com o canto superior direito.
- a reta deve ter 5 pixeis de largura
*/

int main() {

  open(largura, altura, "exemplos/Questao 3");
  background(BLACK);
  stroke(GREEN);
  strokeWeight(5);

  line(0, 600, 600, 0);
  save();
  close();
  return 0;
}
