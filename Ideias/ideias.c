#define XPAINT
#include "xpaint.h"

int main(){
    xopen(600, 400, "main"); // cria uma tela de 600x400 com o nome main.png
    stroke("white");
    int px = 300, py = 200;
    int tam = 100;
    fill("red");
    circle(px, py, 10);
    circle(px - tam, py + tam, 10);
    circle(px + tam, py + tam, 10);



    for (int i = 0, y = py; y < py + tam; y++, i++) {
        for (int x = px - i; x <= px + i; x += 1){
            point(x, y); // desenha um ponto
        }
    }
    save(); // salva a imagem
    xclose(); // libera recursos alocados
    return 0;
}


#define XPAINT
#include "xpaint.h"

int main(){
    open(200, 200, "main"); // cria uma tela de 600x400 com o nome main.png
    background("0, 0, 0");
    for (int i = 0; i < 90;) {
        int x = xrand(10);
        int y = xrand(10);
        Color color = getPixel(x * 20 + 10, y * 20 + 10);
        if (color.r == 0 && color.g == 0 && color.b == 0) {
            stroke("white");
            fill("white");
            square(x * 20, y * 20, 20);
            i += 1;
        }
    }
    int i = 0; 
    for (int y = 0; y < 10; y++) {
        for (int x = 0; x < 10; x++) {
            Color color = getPixel(x * 20 + 10, y * 20 + 10);
            if (color.r != 0) {
                stroke("black");
                fill("black");
                textSize(10);
                text(x * 20 + 3, y * 20 + 3, "%d", i);
                i += 1;
            }
        }
    }

    save(); // salva a imagem
    close(); // libera recursos alocados
    return 0;
}