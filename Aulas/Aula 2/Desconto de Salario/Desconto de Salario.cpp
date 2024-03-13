#include <stdio.h>

int main()
{
    // Define as variavel e seus valores
    int salario_real = 1428;
    float desconto;
    float salario_final;

    // Executa os calculos
    desconto = salario_real * 0.275;
    salario_final = salario_real - desconto;

    // Define uma saida de dados
    printf("O desconto salarial do funcionario com o salario de R$ 1.428,00 e de: R$ %.2f", salario_final);

    return 0;
}