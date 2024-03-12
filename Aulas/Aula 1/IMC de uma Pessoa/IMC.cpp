#include <stdio.h>

int main()
{
    float peso = 112.42;
    float altura = 1.84;
    
    float imc = peso / (altura * altura);
    
    printf("O IMC da pessoa e: %.2f", imc);

    return 0;
}
