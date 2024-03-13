#include <stdio.h>

int main()
{
    // Define as variaveis e seus valores
	int media_anual;
    int nota1 = 5;
    int nota2 = 7;
    int nota3 = 8;
    int nota4 = 6;

    // Executa o calculo
    media_anual = (nota1 + nota2 + nota3 + nota4) / 4;

    // Declara uma saida de dados que contem a media anual do aluno
    printf("A media anual do aluno e: %d \n", media_anual);

    return 0;
}
