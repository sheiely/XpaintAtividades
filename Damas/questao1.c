#include "xlite.h"
#include <stdio.h>
#include <stdlib.h>

/*
Atividade 1 - Damas
Você e um amigo são viciados em DAMAS.com a 5 anos, um dia o site do jogo acabou
caindo. Como jovens do século XXI vocês não tem damas em casa, então para
compensar resolveram criar uma versão de damas no computador.

Nessa atividade você tem que gerar um jogo de damas
*/
/*Resoluçao
int larguraTotal = 650, alturaTotal = 650;
int largura = 600, altura = 600;
int qntCasas = 8;
int qntCadaTime = 12;
int qntViva = 12 * 2;

const char *cor_bordas = "0";
const char *cor_fundo = "156, 121, 75";
const char *cor_casas_claras = "209, 185, 107";
const char *cor_casas_escuras = " 97,  66,  48";
const char *cor_pecas_claras = "violet";  // violeta
const char *cor_pecas_escuras = "orange"; // laranja
const char *nome_peca_clara = "violeta";
const char *nome_peca_escura = "laranja";
const char *cor_letras_fora = "255";
const char *cor_letras_dentro = "0";
const char *cor_jogadas = "yellow";

typedef struct {
  int team;
  int x;
  int y;
} Peca;
typedef struct {
  int x;
  int y;
  int xVitima;
  int yVitima;
} Position;

typedef struct {
  int x;
  int y;
} Pos;

void gerarMapa(Peca pecas[], int team) {
  // int qntCasas = 8;
  stroke(cor_bordas);
  for (int x = 0; x < qntCasas; x++) {
    for (int y = 0; y < qntCasas; y++) {
      if ((x % 2 == 0 && y % 2 == 0) || (x % 2 != 0 && y % 2 != 0)) {
        fill(cor_casas_claras);
      } else {
        fill(cor_casas_escuras);
      }

      rect(x * ((float)largura / qntCasas), y * ((float)altura / qntCasas),
           ((float)largura / qntCasas), ((float)altura / qntCasas));
    }
  }
  for (int i = 0; i < qntViva; i++) {
    strokeWeight(3);
    stroke(pecas[i].team == team ? "0" : "2550");
    if (pecas[i].team == 1) {
      fill(cor_pecas_claras);
    } else {
      fill(cor_pecas_escuras);
    }
    circle(pecas[i].x * ((float)largura / qntCasas) +
               ((float)largura / qntCasas) / 2,
           pecas[i].y * ((float)altura / qntCasas) +
               ((float)largura / qntCasas) / 2,
           60);
  }
  strokeWeight(1);
}

int getIndexByPosition(Peca pecas[], int x, int y) {
  for (int i = 0; i < qntViva; i++) {
    if (pecas[i].x == x && pecas[i].y == y) {
      return i;
    }
  }
  return -1;
}

void gerarJogadas(Peca pecas[], int indexEscolhido, Position jogadas[]) {
  Peca p = pecas[indexEscolhido];
  Position j1;
  j1.x = p.x - 1;
  j1.y = p.y - 1;
  j1.xVitima = -1;
  Position j2;
  j2.x = p.x - 1;
  j2.y = p.y + 1;
  j2.xVitima = -1;
  Position j3;
  j3.x = p.x + 1;
  j3.y = p.y + 1;
  j3.xVitima = -1;
  Position j4;
  j4.x = p.x + 1;
  j4.y = p.y - 1;
  j4.xVitima = -1;

  jogadas[0] = j1;
  jogadas[1] = j2;
  jogadas[2] = j3;
  jogadas[3] = j4;
  fill(cor_jogadas);
  if (pecas[indexEscolhido].team == 1) {
    if (j1.x >= 0 && j1.x < qntCasas && j1.y >= 0 && j1.y < qntCasas) {
      if (getIndexByPosition(pecas, j1.x, j1.y) == -1) {
        circle(j1.x * ((float)largura / qntCasas) +
                   ((float)largura / qntCasas) / 2,
               j1.y * ((float)altura / qntCasas) +
                   ((float)largura / qntCasas) / 2,
               60);
      } else if (pecas[getIndexByPosition(pecas, j1.x, j1.y)].team !=
                 pecas[indexEscolhido].team) {
        if (getIndexByPosition(pecas, j1.x - 1, j1.y - 1) == -1) {
          jogadas[0].x -= 1;
          jogadas[0].y -= 1;
          jogadas[0].xVitima = j1.x;
          jogadas[0].yVitima = j1.y;
          circle(jogadas[0].x * ((float)largura / qntCasas) +
                     ((float)largura / qntCasas) / 2,
                 jogadas[0].y * ((float)altura / qntCasas) +
                     ((float)largura / qntCasas) / 2,
                 60);
        }
      }
    }
    if (j4.x >= 0 && j4.x < qntCasas && j4.y >= 0 && j4.y < qntCasas) {
      if (getIndexByPosition(pecas, j4.x, j4.y) == -1) {
        circle(j4.x * ((float)largura / qntCasas) +
                   ((float)largura / qntCasas) / 2,
               j4.y * ((float)altura / qntCasas) +
                   ((float)largura / qntCasas) / 2,
               60);
      } else if (pecas[getIndexByPosition(pecas, j4.x, j4.y)].team !=
                 pecas[indexEscolhido].team) {

        if (getIndexByPosition(pecas, j4.x + 1, j4.y - 1) == -1) {
          jogadas[3].x += 1;
          jogadas[3].y -= 1;
          jogadas[3].xVitima = j4.x;
          jogadas[3].yVitima = j4.y;
          circle(jogadas[3].x * ((float)largura / qntCasas) +
                     ((float)largura / qntCasas) / 2,
                 jogadas[3].y * ((float)altura / qntCasas) +
                     ((float)largura / qntCasas) / 2,
                 60);
        }
      }
    }
  } else {
    if (j2.x >= 0 && j2.x < qntCasas && j2.y >= 0 && j2.y < qntCasas) {
      if (getIndexByPosition(pecas, j2.x, j2.y) == -1) {
        circle(j2.x * ((float)largura / qntCasas) +
                   ((float)largura / qntCasas) / 2,
               j2.y * ((float)altura / qntCasas) +
                   ((float)largura / qntCasas) / 2,
               60);
      } else if (pecas[getIndexByPosition(pecas, j2.x, j2.y)].team !=
                 pecas[indexEscolhido].team) {
        if (getIndexByPosition(pecas, j2.x - 1, j2.y + 1) == -1) {
          jogadas[1].x -= 1;
          jogadas[1].y += 1;
          jogadas[1].xVitima = j2.x;
          jogadas[1].yVitima = j2.y;
          circle(jogadas[1].x * ((float)largura / qntCasas) +
                     ((float)largura / qntCasas) / 2,
                 jogadas[1].y * ((float)altura / qntCasas) +
                     ((float)largura / qntCasas) / 2,
                 60);
        }
      }
    }
    if (j3.x >= 0 && j3.x < qntCasas && j3.y >= 0 && j3.y < qntCasas) {
      if (getIndexByPosition(pecas, j3.x, j3.y) == -1) {
        circle(j3.x * ((float)largura / qntCasas) +
                   ((float)largura / qntCasas) / 2,
               j3.y * ((float)altura / qntCasas) +
                   ((float)largura / qntCasas) / 2,
               60);
      } else if (pecas[getIndexByPosition(pecas, j3.x, j3.y)].team !=
                 pecas[indexEscolhido].team) {
        if (getIndexByPosition(pecas, j3.x + 1, j3.y + 1) == -1) {
          jogadas[2].x += 1;
          jogadas[2].y += 1;
          jogadas[2].xVitima = j3.x;
          jogadas[2].yVitima = j3.y;
          circle(jogadas[2].x * ((float)largura / qntCasas) +
                     ((float)largura / qntCasas) / 2,
                 jogadas[2].y * ((float)altura / qntCasas) +
                     ((float)largura / qntCasas) / 2,
                 60);
        }
      }
    }
  }
}

void deletePeca(Peca pecas[], int pos) {
  for (int i = pos; i < qntViva - 1; i++) {
    pecas[i] = pecas[i + 1];
  }
  qntViva--;
}

void gerarMarcacoes() {
  int tamanhoCelula = largura / qntCasas;
  stroke(cor_letras_fora);
  textSize(30);
  for (int i = 0; i < qntCasas; i++) {
    text(tamanhoCelula * i + 30, 600, "%c", 'A' + i);
  }
  for (int i = 0; i < qntCasas; i++) {
    text(607, tamanhoCelula * i + 20, "%d", i);
  }

  textSize(20);
  stroke(cor_letras_dentro);
  for (int i = 0; i < qntCasas; i++) {
    for (int j = 0; j < qntCasas; j++) {
      text(tamanhoCelula * i + 20, tamanhoCelula * j + 30, "%c%d", 'A' + i, j);
    }
  }
}

Pos getPos() {
  char escolha[5];
  // if (fgets(escolha, sizeof(escolha), stdin) == NULL) {
  //     exit(1);
  // }
  if (scanf("%s", escolha)) {
  }
  int x = escolha[0] - (escolha[0] >= 'a' ? 'a' : 'A');
  int y = escolha[1] - '0';
  return (Pos){x, y};
}
*/

int main() {
  open(larguraTotal, alturaTotal, "Damas");
  /*Resoluçao
  background(cor_fundo);
  Peca pecas[qntViva];
  int vez = 1;
  for (int i = 0; i < qntCadaTime; i++) {
    Peca p;
    p.y = (i * 2) / qntCasas;
    if (p.y % 2 == 0) {
      p.x = (i * 2 + 1) % qntCasas;
    } else {
      p.x = (i * 2) % qntCasas;
    }
    p.team = 2;
    pecas[i] = p;
  }

  for (int i = 0; i < qntCadaTime; i++) {
    Peca p;
    p.y = qntCasas - 1 - (i * 2) / qntCasas;
    if (p.y % 2 == 0) {
      p.x = (i * 2 + 1) % qntCasas;
    } else {
      p.x = (i * 2) % qntCasas;
    }
    p.team = 1;
    pecas[i + qntCadaTime] = p;
  }

  gerarMapa(pecas, vez);
  gerarMarcacoes();
  save();
  printf("\n");
  printf("Abra o arquivo Damas.png\nPara começar a jogar,\nDigite enter para "
         "continuar. ");
  getchar();
  while (1) {
    gerarMapa(pecas, vez);
    gerarMarcacoes();
    save();
    printf("%s - escolha peça para mover: ",
           vez == 2 ? nome_peca_clara : nome_peca_escura);
    Pos escolha = getPos();
    int pecaEscolhida = getIndexByPosition(pecas, escolha.x, escolha.y);
    if (pecas[pecaEscolhida].team == (vez == 1 ? 2 : 1)) {
      gerarMapa(pecas, vez);
      Position jogadas[4];
      gerarJogadas(pecas, pecaEscolhida, jogadas);
      gerarMarcacoes();
      save();
      printf("%s - escolha destino da peça: ",
             vez == 2 ? nome_peca_clara : nome_peca_escura);

      int beforeX = escolha.x;
      int beforeY = escolha.y;
      Pos para = getPos();

      for (int i = 0; i < 4; i++) {
        if (para.x == jogadas[i].x && para.y == jogadas[i].y &&
            getIndexByPosition(pecas, para.x, para.y) == -1) {
          pecas[pecaEscolhida].x = para.x;
          pecas[pecaEscolhida].y = para.y;
          if (jogadas[i].xVitima != -1) {
            deletePeca(pecas, getIndexByPosition(pecas, jogadas[i].xVitima,
                                                 jogadas[i].yVitima));
          }
          break;
        }
      }
      gerarMapa(pecas, vez);
      gerarMarcacoes();
      save();
      if (vez == 1 && (pecas[pecaEscolhida].x != beforeX ||
                       pecas[pecaEscolhida].y != beforeY)) {
        vez = 2;
      } else {
        vez = 1;
      }
      if (qntViva <= 1) {
        break;
      }
    } else {
      printf("jogada invalida\n");
    }
  }
  printf("Acabou o jogo\n");
  */
  close();
  return 0;
}
