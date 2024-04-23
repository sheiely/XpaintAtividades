#define XPAINT
#include "xpaint.h"
int largura = 600, altura = 300;


int main(){
    x_open(largura, altura, "exemplos/Questao 10");
  
    for(int i=0; i < 400; i++){


        int x = rand()%largura;
        int y = rand()%altura;
        if(y < x*altura/largura){
            if(y < altura-(x*altura/largura)){
                x_color_set(YELLOW);  
            }else{
                x_color_set(WHITE);
            }  
        }else{
            if(y < altura-(x*altura/largura)){
                x_color_set(BLUE);  
            }else{
                x_color_set(RED);
            }
        }
        x_fill_circle(x, y, 10);




    }
    x_save();
    x_close();
        
    return 0;
}