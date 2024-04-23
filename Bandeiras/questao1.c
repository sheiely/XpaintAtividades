#define XPAINT
#include "xpaint.h"
int largura = 600, altura = 600;


int main(){
  x_open(largura, altura, "exemplos/Questao 1");
  
  for(int i=0; i < 400; i++){


    int x = rand()%largura;//Cria uma posição de x aleatoria
    int y = rand()%altura;//Cria uma posição de y aleatoria

    if(x>largura/2){//Aqui temos um if: caso o x seja maior que a metade da largura, ele será pintado de vermelho
      x_color_set(RED);
    }else{
      x_color_set(BLUE);//Se não, será pintado de azul
    }
    x_fill_circle(x, y, 10);




  }
  x_save();
  x_close();
    
  return 0;
}
