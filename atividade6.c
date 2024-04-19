#define XPAINT
#include "xpaint.h"
float largura = 600, altura = 600;

/*
Atividade 5 -
*/

int main() {
  x_open(largura, altura, "exemplos/Atividade 6");
  x_color_set(RED);

  for (int x = 0; x <= largura; x++) {
    float formula = largura - (largura * x_math_pow(x / largura, 2));
    for (int y = altura; y >= 0; y--) {
      if (y >= formula && y <= formula + 5) {
        x_color_set(RED);
      } else {
        x_color_set(BLUE);
      }
      x_fill_rect(x, y, 1, 1);
    }
  }
  x_save();
  x_close();
  return 0;
}
