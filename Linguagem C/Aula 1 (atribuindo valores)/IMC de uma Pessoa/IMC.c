#include <stdio.h>

int main()
{
    // Define os valores
    float peso = 112.42;
    float altura = 1.84;

    // Executa o calculo
    float imc = peso / (altura * altura);

    // E define a saida de dados
    printf("O IMC da pessoa e: %.2f", imc);

    return 0;
}
