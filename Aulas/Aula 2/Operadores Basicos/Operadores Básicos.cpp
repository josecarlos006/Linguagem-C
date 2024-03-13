#include <stdio.h>

int main()
{
    // Define os numeros 1 e 2 e seus respectivos valores que são 10 e 100 
    int num_1 = 10;
    int num_2 = 100;

    /*
    Define as variaveis das operações basicas
    soma = soma;
    mult = multiplicação;
    sub = subtração;
    _div = divisão.
    (No caso de inserir 'div' no lugar do '_div' no código, ele será rejeitado e pode ocorrer um erro.)
    */
    int soma;
    int mult;
    int sub;
    float div_;

    // Executa os calculos
    soma = num_1 + num_2;
    sub = num_1 - num_2;
    mult = num_1 * num_2;
    div_ = num_1 / num_2;

    // Declara a saida para todas as 4 operações
    printf("A soma do numero %d e %d e: %d \n", num_1, num_2, soma);
    printf("A subtracao do numero %d e %d e: %d \n", num_1, num_2, sub);
    printf("A multiplicacao do numero %d e %d e: %d \n", num_1, num_2, mult);
    printf("A divisao do numero %d e %d e: %d \n", num_1, num_2, div_);

    return 0;
}
