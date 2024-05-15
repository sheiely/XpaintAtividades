#define XPAINT
#include "xpaint.h"
int largura = 600, altura = 600;


int main(){
    xopen(largura, altura, "exemplos/Questao 9");
  
    for(int i=0; i < 400; i++){
        int x = rand()%largura;
        int y = rand()%altura;

        if(x<y){
            if(x<altura-y){
                fill("blue");  
            }else{
                fill("red");
            }  
        }else{
            if(x<altura-y){
                fill("yellow");  
            }else{
                fill("white");
            }
        }
        circle(x, y, 10);
    

    }
    save();
    xclose();
        
    return 0;
}
