#define XPAINT
#include "xpaint.h"
int largura = 600, altura = 600;


int main(){
    xopen(largura, altura, "exemplos/Questao 6");
  
    for(int i=0; i < 400; i++){
        int x = rand()%largura;
        int y = rand()%altura;

        if(x<largura/2){
            if(y<altura/2){
                fill("red");
            }else{
                fill("white");
            }
        }else{
            if(y<altura/2){
                fill("yellow");
            }else{
                fill("blue");
            }
        }
        circle(x, y, 10);

    }
    save();
    xclose();
        
    return 0;
}
