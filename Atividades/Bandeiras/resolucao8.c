#define XPAINT
#include "xpaint.h"
int largura = 600, altura = 600;


int main(){
    create(largura, altura, "exemplo8");
  
    for(int i=0; i < 400; i++){
        int x = rand()%largura;
        int y = rand()%altura;

        if(x<altura-y){
            fill("blue");  
        }else{
            fill("red");
        }
        circle(x, y, 10);

    }
    save();
    destroy();
        
    return 0;
}
