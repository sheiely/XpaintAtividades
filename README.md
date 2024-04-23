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
