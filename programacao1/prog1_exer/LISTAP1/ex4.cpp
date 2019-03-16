#include <stdio.h>

int main(void)
{
	int vet_val[10], vet_prob[5], x, y, aux;
	
	for(x=0; x<10; x++)				//preenchendo os vetores
	{
		printf("\nDigite um valor para o vetor_valores[%d]:", x);
		scanf("%d", &vet_val[x]);
	}
	printf("\n");
	for(x=0; x<5; x++)
	{
		printf("\nDigite um valor para o vetor_proibido[%d]:", x);
		scanf("%d", &vet_prob[x]);
	}
	
	for(x=0; x<10; x++)				//imprimindo os numeros
	{
		for(y=0; y<5; y++)
		{
			if(vet_val[x]==vet_prob[y]) break;
		}
		if(y==5) printf("%d ", vet_val[x]);
	}
	
	return 0;
}
