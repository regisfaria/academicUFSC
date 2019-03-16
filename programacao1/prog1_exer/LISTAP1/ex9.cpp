#include <stdio.h>

int main(void)
{
	int consu;
	float valor;
	
	printf("Qual foi o consumo mensal de energia?\n");
	scanf("%d", &consu);
	
	if(consu<=50) valor = consu * 0.35;
	if(consu>50) valor = 50 * 0.35;
	if(consu>50 && consu<=150) valor = valor + ((consu - 50) * 0.44);
	if(consu>=150) valor = valor + (100 * 0.44);
	if(consu>=151) valor = valor + ((consu - 150) * 0.75);
	
	printf("O valor do seu consumo mensal em kWh = R$:%f", valor);
	
	return 0;
}
