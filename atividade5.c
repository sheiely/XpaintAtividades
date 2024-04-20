#define XPAINT
#include "xpaint.h"
int largura = 600, altura = 600;

/*
Atividade 5 - Xadrez
Voce e um amigo são viciados em CHESS.COM a 5 anos, um dia o site do jogo acabou
caindo. Como jovens do seculo XXI vocês nao tem xadrez em casa, entao para
compensar resolveram criar uma versao de xadrez no computador.

Nessa atividade voce tem que gerar uma imagem xadrez
A imagem deve ter 8x8 casas conforme o exemplo
*/

int main() {
  x_open(largura, altura, "exemplos/Atividade 5");
  /*
  resuloção: 
  int qntCasas = 8;
  for (int x = 0; x <= qntCasas; x++) {
    for (int y = 0; y <= qntCasas; y++) {
      if ((x % 2 == 0 && y % 2 == 0) || (x % 2 != 0 && y % 2 != 0)) {
        x_color_set(WHITE);
      } else {
        x_color_set(BLACK);
      }
      x_fill_rect(x * (largura / qntCasas), y * (altura / qntCasas),
                  (largura / qntCasas), (altura / qntCasas));
    }
  }
  */
  x_save();
  x_close();
  return 0;
}
