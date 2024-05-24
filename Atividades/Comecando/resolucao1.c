#define XPAINT
#include "xpaint.h"
int largura = 600, altura = 600;


int main(){
  create(largura, altura, "exemplo1");
  
  background("0, 0, 0");
  stroke("white");
  fill("red");
  strokeWeight(5);
  rect(200,150, 200, 300);
 
  save();
  destroy();
    
  return 0;
}
