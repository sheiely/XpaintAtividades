#define XPAINT
#include "xpaint.h"
int largura = 600, altura = 600;

/*
Atividade 2 - Desenhe um circulo
Nessa atividade voce deve criar uma imagem com um circulo AZUL
de raio 200 no meio da tela
*/

int main() {
  x_open(largura, altura, "exemplos/Atividade 2");
  /*
  resolução:
  x_color_set(BLUE);
  x_fill_circle(300, 300, 200);
  */
  x_save();
  x_close();

  return 0;
}
