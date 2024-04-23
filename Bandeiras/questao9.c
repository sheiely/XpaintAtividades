#define XPAINT
#include "xpaint.h"
int largura = 600, altura = 600;


int main(){
    x_open(largura, altura, "exemplos/Questao 9");
  
    for(int i=0; i < 400; i++){

        /* Resolução:
        int x = rand()%largura;
        int y = rand()%altura;
        if(x<y){
            if(x<altura-y){
                x_color_set(BLUE);  
            }else{
                x_color_set(RED);
            }  
        }else{
            if(x<altura-y){
                x_color_set(YELLOW);  
            }else{
                x_color_set(WHITE);
            }
        }
        x_fill_circle(x, y, 10);
        */



    }
    x_save();
    x_close();
        
    return 0;
}