#include <stdio.h>

int main()
{
    /* Esse programa é um codigo de repetição
    'int x = 0' - declaração de variavel e seu valor;
    'x <= 400' - declara que 'x' começa no '0' ate atingir 400;
    'x = x + 5' - mostra que a variavel 'x' ira pular de 5 em 5 ate atingir 400 que e o limite;
    '\n' - a numeração fica um abaixo da outra.
    */
    for (int x = 0; x <= 400; x = x + 5)
    {
        printf("%d \n", x);
    }

    return 0;
}