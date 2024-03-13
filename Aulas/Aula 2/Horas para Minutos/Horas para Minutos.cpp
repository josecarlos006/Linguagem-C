#include <stdio.h>

int main()
{
	// Define a variavel e seu valor
	int minutos_inicial = 3722;

	// Usasse '%' para receber o resto de uma divisão que seria os minutos finais
	int resto_minutos = minutos_inicial % 60;
	// Executa a divisão com o '/' e o '60' para se ter as horas
	int horas_finais = minutos_inicial / 60;

	// Define uma saida de dados
	printf("O resultado e: %d horas e %d minutos", horas_finais, horas_finais);
	
    return 0;
}
