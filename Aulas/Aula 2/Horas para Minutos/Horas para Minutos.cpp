#include <stdio.h>

int main()
{
	int minutos_inicial = 3722;
	
	int resto_minutos = minutos_inicial % 60;
	int horas_finais = minutos_inicial / 60;
	
	printf("O resultado e: %d horas e %d minutos", horas_finais, horas_finais);
	
    return 0;
}
