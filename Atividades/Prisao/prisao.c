#define XPAINT
#include "xpaint.h"
#include <Windows.h>


int largura = 600, altura = 600;
int limitar(int n ,int min, int max){
    if(n < min){
        n = min;
    }
    if(n > max){
        n = max;
    }

    return n;
}



int main(){
    int x = largura/2, y = altura/2;
    create(largura, altura, "prisao");
    background("100, 100, 100");
    stroke("black");
    square(100, 100, 400);
    for(int i=0; ; i++){
        x = limitar(x + rand()%40-20, 100, 500);
        y = limitar(y + rand()%40-20, 100, 500);
        circle(y, x, 20);
        save();
        Sleep(10);
    }
    destroy();   
    return 0;
}
