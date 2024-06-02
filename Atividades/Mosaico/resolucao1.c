#define XPAINT
#include "xpaint.h"
int largura = 300, altura = 300;
int tam = 20;
int r = 100, g = 100, b = 100;
int x = 0, y = 0;

int main(){
  create(largura, altura, "exemplo1");
  int qnt = 0;
  for(int i=0; i < (largura/tam) * (altura/tam); i++){
    qnt++;
    fill("%d, %d, %d", r, g ,b);
    square(x, y, tam);
    x += tam;
    if(x >= largura){
        y+=tam;
        x=0;
    }
    
    r += rand()%20-10;
    if(r > 255){
        r = r-255;
    }else if(r < 0){
        r = -r;
    }
    g += rand()%20-10;
    if(g > 255){
        g = g-255;
    }else if(g < 0){
        g = -g;
    }
    b += rand()%20-10;
    if(b > 255){
        b = b-255;
    }else if(b < 0){
        b = -b;
    }

  }
  printf("%d", qnt);
  save();
  destroy();
    
  return 0;
}
