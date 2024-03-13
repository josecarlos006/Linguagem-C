#include <stdio.h>

int main()
{
    // Define os valores
    int raio = 2;
    float circuferencia;
    float pi = 3.14;

    // Executa o calculo
    circuferencia = pi * (raio * raio);

    // E define a saida de dados
    printf("A circuferencia e: %.2f", circuferencia);

    return 0;
}
