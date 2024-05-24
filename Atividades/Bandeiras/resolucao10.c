#define XPAINT
#include "xpaint.h"
int largura = 600, altura = 300;


int main(){
    create(largura, altura, "exemplo10");
  
    for(int i=0; i < 400; i++){
        int x = rand()%largura;
        int y = rand()%altura;
        if(y < x*altura/largura){
            if(y < altura-(x*altura/largura)){
                fill("yellow");  
            }else{
                fill("white");
            }  
        }else{
            if(y < altura-(x*altura/largura)){
                fill("blue");  
            }else{
                fill("red");
            }
        }
        circle(x, y, 10);

    }
    save();
    destroy();
        
    return 0;
}
