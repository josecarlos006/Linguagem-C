#include <stdio.h>

int main()
{
    // Declarando as variaveis e seus valores
    int pedido;
    float preco, total;

    // Pedindo quantas maçãs seram compradas para obter o calculo mais a frente
    printf("Digite a quantidade de macas que voce ira comprar: ");
    scanf("%d", &pedido);

    // Verificando se a quantidade das macas é maior que uma dúzia ou menor para se receber respectivos valores informados no README da questão.
    if(pedido < 12){
        preco = 0.30;
    }else{
        preco = 0.25;
    }

    // Calculo de preços
    total = pedido * preco;

    // Saida de dados
    printf("O preco das %d macas sairam a: R$%.2f ", pedido, total);
}