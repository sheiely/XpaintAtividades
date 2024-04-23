#define XPAINT
#include "xpaint.h"
int largura = 600, altura = 600;


int main(){
    x_open(largura, altura, "exemplos/Questao 6");
  
    for(int i=0; i < 400; i++){

        /* Resolução:
        int x = rand()%largura;
        int y = rand()%altura;
        if(x<largura/2){
            if(y<altura/2){
                x_color_set(RED);
            }else{
                x_color_set(WHITE);
            }
        }else{
            if(y<altura/2){
                x_color_set(YELLOW);
            }else{
                x_color_set(BLUE);
            }
        }
        x_fill_circle(x, y, 10);
        */



    }
    x_save();
    x_close();
        
    return 0;
}
