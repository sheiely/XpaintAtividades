# XpaintAtividades
## Rascunho
Nessa atividade você vai gerar imagens com varios padroes de bandeiras diferentes
partindo do exemplo:
```c
x_open(largura, altura, "exemplos/Questao 1");
  
    for(int i=0; i < 400; i++){


        int x = rand()%largura;//Cria uma posição de x aleatoria
        int y = rand()%altura;//Cria uma posição de y aleatoria

        if(x>largura/2){//Aqui temos um if: caso o x seja maior que a metade da largura, ele será pintado de vermelho
        x_color_set(RED);
        }else{
        x_color_set(BLUE);//Se não, será pintado de azul
        }
        x_fill_circle(x, y, 10);




    }
    x_save();
    x_close();
```

## Questão 1 - Leste Oeste

![Referencia_Atividade1](https://github.com/sheiely/XpaintAtividades/blob/main/Baneiras/exemplos/Questao%201.png)

## Questão 2 - Norte Sul
![Referencia_Atividade1](https://github.com/sheiely/XpaintAtividades/blob/main/Baneiras/exemplos/Questao%202.png)

## Questão 3 - Leste Meio Oeste
![Referencia_Atividade1](https://github.com/sheiely/XpaintAtividades/blob/main/Baneiras/exemplos/Questao%203.png)

## Questão 4 - Norte Meio Sul
![Referencia_Atividade1](https://github.com/sheiely/XpaintAtividades/blob/main/Baneiras/exemplos/Questao%204.png)

## Questão 5 - Leste Norte Sul
![Referencia_Atividade1](https://github.com/sheiely/XpaintAtividades/blob/main/Baneiras/exemplos/Questao%205.png)

## Questão 6 - Quadrantes
![Referencia_Atividade1](https://github.com/sheiely/XpaintAtividades/blob/main/Baneiras/exemplos/Questao%206.png)

## Questão 7 - Diagonal
![Referencia_Atividade1](https://github.com/sheiely/XpaintAtividades/blob/main/Baneiras/exemplos/Questao%207.png)

## Questão 8 - Contradiagonal
![Referencia_Atividade1](https://github.com/sheiely/XpaintAtividades/blob/main/Baneiras/exemplos/Questao%208.png)

## Questão 9 - X
![Referencia_Atividade1](https://github.com/sheiely/XpaintAtividades/blob/main/Baneiras/exemplos/Questao%209.png)

## Questão 10 - X não quadrado
![Referencia_Atividade1](https://github.com/sheiely/XpaintAtividades/blob/main/Baneiras/exemplos/Questao%2010.png)