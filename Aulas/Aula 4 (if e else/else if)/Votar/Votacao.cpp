#include <stdio.h>

int main()
{
    // Declarando variaveis
    int ano_nasc;
    int ano_atual;
    int idade;
    int votacao = 16;

    // Solicita os dados
    printf("Digite o ano que você nasceu: ");
    scanf("%d", &ano_nasc);

    printf("Digite o ano que estamos: ");
    scanf("%d", &ano_atual);

    // Calculo para receber a idade
    idade = ano_atual - ano_nasc;

    // Vendo se a pessoa está apta para votar nesse ano
    if (idade >= votacao)
    {
        printf("\n Ja pode votar esse ano amigo! Sua idade: %d", idade);
    }
    else
    {
        printf("\n Não pode votar esse ano amigo. Sua Idade: %d", idade);
        printf("\n So quando voce tiver %d anos", votacao);
    }
}
