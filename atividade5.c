#define XPAINT
#include "xpaint.h"
int largura = 600, altura = 600;

/*
Atividade 5 - Xadrez
Nessa atividade voce tem que gerar uma imagem xadrez
A imagem deve ter 40x40 celulas
conforme o exemplo
*/

int main() {
  x_open(largura, altura, "exemplos/Atividade 5");
  /*
  resuloção: 
  for (int x = 0; x <= 40; x++) {
    for (int y = 0; y <= 40;y++) {
      if ((x % 2 == 0 && y % 2 == 0) || (x % 2 != 0 && y % 2 != 0)) {
        x_color_set(WHITE);
      } else {
        x_color_set(BLACK);
      }
      x_fill_rect(x*(largura/40), y*(altura/40), (largura/40), (altura/40));
    }
  }
  */
  x_save();
  x_close();
  return 0;
}
