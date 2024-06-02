#define XPAINT
#include "xpaint.h"
int largura = 600, altura = 600;
int tam = 20;
int r = 100, g = 100, b = 100;
int x = 0, y = 0;

int main(){
    create(largura, altura, "exemplo1");
    int x, y, w;
    scanf("%d %d %d", &x, &y, &w);



    stroke("black");
    square(x, y, w);
    circle(13*w/50+x, 15*w/50+y, 8*w/50);
    circle(13*w/50+x, 15*w/50+y, 1*w/50);
    circle(25*w/50+x, 8*w/50+y, 12*w/50);
    circle(25*w/50+x, 8*w/50+y, 1*w/50);
    bezier(5*w/50+x, 20*w/50+y, 15*w/50+x, 40*w/50+y, 20*w/50+x, 40*w/50+y, 40*w/50+x, 10*w/50+y);

    save();
    destroy();
    
  return 0;
}
