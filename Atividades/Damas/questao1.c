#include "xpaint.h"
#include <stdio.h>
#include <stdlib.h>

/*
Atividade 1 - Damas
Você e um amigo são viciados em DAMAS.com a 5 anos, um dia o site do jogo acabou
caindo. Como jovens do século XXI vocês não tem damas em casa, então para
compensar resolveram criar uma versão de damas no computador.

Nessa atividade você tem que gerar um jogo de damas
*/

int largura = 600, altura = 600;
int main(){
  int casas = 8;
  open(largura, altura, "exemplos/questao1");
  for(int x = 0; x < casas; x++){
    for(int y = 0; y < casas; y++){
      if(x%2 != 0){
        if(y%2 !=0){
          fill(WHITE);
        }else{
          fill(BLACK);
        }
      }else{
        if(y%2 !=0){
          fill(BLACK);
        }else{
          fill(WHITE);
        }
      }
      square(x*largura/casas, y*largura/casas, largura/casas);
    }
  }
  save();
  close();
  return 0;
}