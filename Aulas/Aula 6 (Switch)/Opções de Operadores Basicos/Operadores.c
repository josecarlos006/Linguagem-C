#include <stdio.h>

int main()
{
    // Declarando Variaveis:
    int opcao, resto;
    float sub, soma, divisao, multi;
    int number1, number2;

    // Monstrando a tabela:
    // Usasse "\n" para pular linha e "\t" para centralizar o texto no meio
    printf("\n\t Opcoes de Operadores: \n\t 1) Soma \n\t 2) Subtracao \n\t 3) Multiplicacao \n\t 4) Divisao \n\t 5) Resto \n\n");

    // Pedindo opcao:
    printf("\tDigite uma opcao: ");
    scanf("%d", &opcao);

    // Pedindo os numeros para se ter o resultado:
    printf("Digite o primeiro numero: ");
    scanf("%d", &number1);

    printf("Digite o segundo numero: ");
    scanf("%d", &number2);

    /*
    O switch funciona como um "if" e "else" sendo que uma forma simplificada pelo fato de verificar
    pelo "switch(opcao)" o digito de 1 a 5 que voce digitou e ai sim entregar o resultado.
    */
    switch (opcao)
    {
    case 1:
        soma = number1 + number2;
        printf("\t O resultado e: %f", soma);
        break;
    case 2:
        sub = number1 - number2;
        printf("\t O resultado e: %f", sub);
        break;
    case 3:
        multi = number1 * number2;
        printf("\t O resultado e: %f", multi);
        break;
    case 4:
        divisao = number1 / number2;
        printf("\t O resultado e: %f", divisao);
        break;
    case 5:
        resto = number1 % number2;
        printf("\t O resultado e: %d", resto);
        break;

    default:
        break;
    }
}