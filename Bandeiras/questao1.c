#define XPAINT
#include "xpaint.h"
int largura = 600, altura = 600;


int main(){
  xopen(largura, altura, "exemplos/Questao 1");
  
  for(int i=0; i < 400; i++){
    int x = rand()%largura;//Cria uma posição de x aleatoria
    int y = rand()%altura;//Cria uma posição de y aleatoria

    if(x>largura/2){//Aqui temos um if: caso o x seja maior que a metade da largura, ele será pintado de vermelho
      fill("red");
    }else{
      fill("blue");//Se não, será pintado de azul
    }
    circle(x, y, 10);

  }
  save();
  xclose();
    
  return 0;
}
