#define XPAINT
#include "xpaint.h"
int largura = 600, altura = 600;

/*
Atividade 1 - Desenhe um retangulo
Nessa atividade voce deve criar uma imagem com um retangulo VERMELHO
de largura 200 e altura 300 no meio da tela
*/

int main(){
  open(largura, altura, "exemplos/Questao 1");
  
  background(BLACK);
  stroke(WHITE);
  fill(RED);
  strokeWeight(5);
  rect(200,150, 200, 300);
 
  save();
  close();
    
  return 0;
}
