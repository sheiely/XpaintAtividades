#define XPAINT
#include "xpaint.h"
#include <stdio.h>
#include <string.h>

int largura = 600, altura = 600;

int main() {
  create(largura, altura, "main4");
  background("white");
  int tam, maior = 0;
  scanf("%d", &tam);
  int vet[tam];
  for(int i = 0; i < tam; i++){
    int n;
    scanf("%d", &n);
    vet[i] = n;
    if(n > maior){
      maior = n;
    }
  }
  strokeWeight(0);
  double recW = (570.0 - (tam*6)) /tam ;
  int x = 15;
  int y = 585;
  double recH = 555.0 / maior;
  double red = 255.0 / maior;
  textSize(20);
  
  for(int i = 0; i < tam; i++){
    stroke("%d, 0, 0",(int) (red*vet[i]));
    fill("%d, 0, 0",(int) (red*vet[i]));
    rect(x + (recW*i) + 3, y, recW, - (recH * vet[i]));
    x+=3;
    stroke("black");
    text(x + (recW*i) + 3, 560 - (recH * vet[i]), "%d", vet[i]);
    
  }
  
  
  save();
  destroy();
}
