# XpaintAtividades
## Rapido Tutorial
Para utilizar o Xpaint temos que basicamente abrir a imagem com a função **x_open()**,
depois para salvar e gerar o png usamos o **x_save()** e para encerrar o Xpaint e liberar os recursos o **x_close()**
```c
x_open(largura_da_imagem, altura_da_imagem, "nome da imagem");//cria a imagem

//aqui vem o que voce deseja gerar na imagem: um quadrado, circulo?

x_save();//salva como png
x_close();//libera os recursos
```
Mais funções e documentação completa:
https://github.com/senapk/xpaint

## Questão 1 - Desenhe um retangulo

Nessa primeira atividade, você só tera que gerar uma imagem com um retângulo <code>VERMELHO</code> exatamente no centro
- O retângulo deve ter: largura 200 e altura 300
<p>imagem de referência:</p>

![Referencia_Atividade1](https://github.com/sheiely/XpaintAtividades/blob/main/Atividade%201/exemplos/Questao%201.png)

## Questão 2 - Desenhe um circulo

Nessa atividade, você deve gerar uma imagem com um círculo <code>AZUL</code> exatamente no centro
- O Circulo deve ter: 200 de raio
<p>imagem de referência:</p>

![Referencia_Atividade1](https://github.com/sheiely/XpaintAtividades/blob/main/Atividade%201/exemplos/Questao%202.png)

## Questão 3 - Desenhe uma reta diagonal 
Nessa atividade você deve criar uma imagem com uma reta diagonal <code>VERDE</code> ligando
o canto inferior esquerdo da imagem com o canto superior direito.
- A reta deve ter: 5 pixeis de largura
<p>imagem de referência:</p>

![Referencia_Atividade1](https://github.com/sheiely/XpaintAtividades/blob/main/Conceitos/exemplos/Questao%203.png)


