#define XPAINT
#include "xpaint.h"

int main() {
  create(600, 400, "exemplos/questao1"); // cria uma tela de 600x400 com o nome main.png
  stroke("white");
  int px = 300, py = 200;
  int tam = 100;
  fill("red");

  for (int i = 0, y = py; y < py + tam; y++, i++) {
    for (int x = px - i; x <= px + i; x += 1) {
      point(x, y); // desenha um ponto
    }
  }
    
  save();  // salva a imagem
  destroy(); // libera recursos alocados
  return 0;
}
