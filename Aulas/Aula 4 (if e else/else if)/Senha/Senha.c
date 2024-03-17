#include <stdio.h>

int main()
{
    // Declarando variaveis
    int senha;
    int senha_salva = 1234;

    // Solicitando a senha
    printf("Digite a senha de acesso: ");
    scanf("%d", &senha);

    // Vendo se a senha informada é válida
    /*
    '==' - informa se a "senha" informada pelo usuário for igual a "senha_salva" o acesso é permitido.

    Diferença entre '==' e '=':

    == (Operador de Igualdade):
    - O operador '==' é usado para comparar se dois valores são iguais.

    = (Operador de Atribuição):
    - O operador '=' é usado para atribuir um valor a uma variável.
    - Ele não compara valores; ele simplesmente atribui o valor à variável à esquerda do operador.
    */
    if (senha == senha_salva)
    {
        printf("\n - ACESSO PERMITIDO (SENHA CORRETA)");
    }
    else
    {
        printf("\n - ACESSO NEGADO (SENHA INCORRETA)");
    }
}