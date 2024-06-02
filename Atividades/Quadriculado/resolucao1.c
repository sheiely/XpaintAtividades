#define XPAINT
#include "xpaint.h"

int main(){
    create(200, 200, "exemplo1"); 
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

    save(); 
    destroy(); 
    return 0;
}