#define XPAINT
#include "xpaint.h"
int largura = 600, altura = 600;

/*
Atividade 5 - Desenhe a logo dos X-men
Os X-men te contrataram para refazer sua logo, infelizmente o mundo está em uma
catastofre pois o magneto destruiu todos os programas de edição do mundo, e
agora seu dever é refazer a logo usando C. Dica: Use 2 ciruclos e 2 linhas
*/

int main() {
  x_open(largura, altura, "exemplos/Atividade 5");
  x_color_set(RED);
  x_fill_circle(300, 300, 200);
  x_color_set(x_color_make(220, 220, 0, 255));
  x_fill_circle(300, 300, 150);
  x_color_set(RED);
  x_fill_line(440, 440, 160, 160, 50);
  x_fill_line(160, 440, 440, 160, 50);
  x_save();
  x_close();
  return 0;
}
