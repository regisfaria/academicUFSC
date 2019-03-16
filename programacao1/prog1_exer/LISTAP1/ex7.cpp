#include <stdio.h>

int main(void)
{
	int a, b, c, soma = 0, x;
	
	printf("\nDigite um valor para a que seja >1:");			// atribuição de valores
	scanf("%d", &a);
	printf("\nDigite um valor para b:");
	scanf("%d", &b);
	printf("\nDigite um valor para c que seja maior que o digitado anteriormente:");
	scanf("%d", &c);
	
	for(x=b; x<=c; x++)
	{
		if(x%a == 0) soma = soma + x;
	}
	
	printf("A soma dos inteiros entre %d e %d divisiveis por %d = %d", b, c, a, soma);
	
	return 0;
}
