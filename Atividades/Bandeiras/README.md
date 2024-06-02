# Bandeiras
Nessa atividade você vai gerar imagens com varios padroes de bandeiras diferentes
partindo do exemplo:
## Rascunho

```c
create(largura, altura, "exemplo1");
  
    for(int i=0; i < 400; i++){


        int x = rand()%largura;//Cria uma posição de x aleatoria
        int y = rand()%altura;//Cria uma posição de y aleatoria

        if(x>largura/2){//Aqui temos um if: caso o x seja maior que a metade da largura, ele será pintado de vermelho
        fill("red");
        }else{
        fill("blue");//Se não, será pintado de azul
        }
        circle(x, y, 20);




    }
save();
destroy();
```

## Questão 1 - Leste Oeste

![Referencia_Atividade1](exemplo1.png)

## Questão 2 - Norte Sul
![Referencia_Atividade1](exemplo2.png)

## Questão 3 - Leste Meio Oeste
![Referencia_Atividade1](exemplo3.png)

## Questão 4 - Norte Meio Sul
![Referencia_Atividade1](exemplo4.png)

## Questão 5 - Leste Norte Sul
![Referencia_Atividade1](exemplo5.png)

## Questão 6 - Quadrantes
![Referencia_Atividade1](exemplo6.png)

## Questão 7 - Diagonal
![Referencia_Atividade1](exemplo7.png)

## Questão 8 - Contradiagonal
![Referencia_Atividade1](exemplo8.png)

## Questão 9 - X
![Referencia_Atividade1](exemplo9.png)

## Questão 10 - X não quadrado
![Referencia_Atividade1](exemplo10.png)
