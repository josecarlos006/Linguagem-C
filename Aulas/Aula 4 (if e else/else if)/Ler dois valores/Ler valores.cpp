#include <stdio.h>

int main()
{
    // Declarando variaveis
    int valor1, valor2;

    // Solicita ao usuário para fornecer os dois valores
    printf("Informe o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Informe o segundo valor: ");
    scanf("%d", &valor2);

    /*
    Verifica qual valor é maior usando if, else if e else
    "if" - se for verdadeiro executa essa opção;
    "else if" - caso if for falso executa essa opção;
    "else" - se nenhuma das opções for verdadeira executa essa.
    */
    if (valor1 > valor2)
    {
        printf("O maior valor entre %d e %d é: %d\n", valor1, valor2, valor1);
    }
    else if (valor2 > valor1)
    {
        printf("O maior valor entre %d e %d é: %d\n", valor1, valor2, valor2);
    }
    else
    {
        printf("Os valores fornecidos são iguais.\n");
    }

    return 0;
}