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

  x_open(largura, altura, "exemplos/Atividade 3");
  /*
   resolução:
  x_color_set(GREEN);
  x_fill_line(0, 600, 600, 0, 5);
  */
  x_save();
  x_close();
  return 0;
}
