#include <stdio.h>

int main()
{
    float altura_inicial;
    float crescimento_anual = 0.10; // crescimento anual em cm

    // Solicita a altura inicial da criança
    printf("Informe a altura inicial da criança em centímetros: ");
    scanf("%f", &altura_inicial);

    printf("Altura nos próximos 4 anos:\n");

    // Repetição for para calcular e exibir a altura nos próximos 4 anos
    for (int ano = 1; ano <= 4; ano++)
    {
        altura_inicial += crescimento_anual; // Incrementa a altura anualmente
        printf("Ano %d: %.2f cm\n", ano, altura_inicial);
    }

    return 0;
}