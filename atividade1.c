#define XPAINT
#include "xpaint.h"
int largura = 600, altura = 600;

/*
Atividade 1 - Desenhe um retangulo
Nessa atividade voce deve criar uma imagem com um retangulo VERMELHO
de largura 200 e altura 300 no meio da tela
*/

int main(){
  x_open(largura, altura, "exemplos/Atividade 1");
  x_color_set(RED);
  x_fill_rect(200, 150, 200, 300);
  x_save();
  x_close();
    
  return 0;
}
