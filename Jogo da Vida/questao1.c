#define XPAINT
#include "xpaint.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int largura = 600, altura = 600;

int main() {
  create(largura, altura, "main5");
  int tam = 7;
  int mat[tam][tam];
  int matNova[tam][tam];

  gridInit(height() / tam, 0);
  for (int i = 0; i < tam; i++) {
    for (int k = 0; k < tam; k++) {
      int estado = xrand(4);
      if (estado == 1) {
        mat[i][k] = estado;
        matNova[i][k] = estado;
      } else {
        mat[i][k] = 0;
        matNova[i][k] = 0;
      }
    }
  }

  for (int i = 0; i < tam; i++) {
    for (int k = 0; k < tam; k++) {
      fill("white");
      gridSquare(i, k);
      if (mat[i][k] == 1) {
        fill("pink");
        gridCircle(i, k);
      }
    }
  }
  save();
  printf("Pressione enter resolver o jogo da vida...");
  scanf("/");
  for (int i = 0; i < tam; i++) {
    for (int k = 0; k < tam; k++) {
      int cont = 0;
      for (int j = 0, tempx = -1, tempy = -1; j < 9; j++) {
        if (i + tempx >= 0 && i + tempx < tam && k + tempy >= 0 &&
            k + tempy < tam) {
          if (mat[i + tempx][k + tempy] == 1)
            cont++;
        }
        tempy++;
        if (tempy == 2) {
          tempy = -1;
          tempx++;
        }
      }
      if (mat[i][k] == 1)
        cont--;
      if (mat[i][k] == 1 && cont < 2) {
        matNova[i][k] = 0;
      } else if (mat[i][k] == 1 && cont > 3) {
        matNova[i][k] = 0;
      } else if (mat[i][k] == 0 && cont == 3) {
        matNova[i][k] = 1;
      } else if (mat[i][k] == 1 && (cont == 2 || cont == 3)) {
        matNova[i][k] = 1;
      }
    }
  }

  for (int i = 0; i < tam; i++) {
    for (int k = 0; k < tam; k++) {
      fill("white");
      gridSquare(i, k);
      if (matNova[i][k] == 1) {
        fill("pink");
        gridCircle(i, k);
      }
    }
  }

  save();
  destroy();
}
