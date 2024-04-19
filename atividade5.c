#define XPAINT
#include "xpaint.h"
int largura = 40, altura = 40;

/*
Atividade 5 - Xadrez
Nessa atividade voce tem que gerar uma imagem xadrez
A imagem deve ter 40x40 pixels e cada pixel deve ser uma celula do xadrez
conforme o exemplo
*/

int main() {
  x_open(largura, altura, "exemplos/Atividade 5");
  for (int x = 0; x <= largura; x++) {
    for (int y = 0; y <= largura; y++) {
      if ((x % 2 == 0 && y % 2 == 0) || (x % 2 != 0 && y % 2 != 0)) {
        x_color_set(WHITE);
      } else {
        x_color_set(BLACK);
      }
      x_fill_rect(x, y, 1, 1);
    }
  }

  x_save();
  x_close();
  return 0;
}
