#define XPAINT
#include "xpaint.h"
int largura = 600, altura = 600;


int main(){
    create(largura, altura, "exemplo7");
  
    for(int i=0; i < 400; i++){
        int x = rand()%largura;
        int y = rand()%altura;

        if(x<y){
            fill("red");  
        }else{
            fill("blue");
        }
        circle(x, y, 10);
    
    }
    save();
    destroy();
        
    return 0;
}
