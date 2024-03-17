#include <stdio.h>

int main()
{
    int numero_inicial, limite;

    // Solicita ao usuário o número inicial
    printf("Informe o numero inicial: ");
    scanf("%d", &numero_inicial);

    // Solicita ao usuário o limite
    printf("Informe o limite: ");
    scanf("%d", &limite);

    // Repetição for para contar de número_inicial até o limite, aumentando de 3 em 3
    printf("Contagem:\n");
    for (int i = numero_inicial; i <= limite; i += 3)
    {
        printf("%d\n", i);
    }

    return 0;
}