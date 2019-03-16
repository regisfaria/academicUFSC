#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int*b)
{
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

int main(void)
{
	int *numeros = (int *) malloc(5*sizeof(int));
	int i;
	
	for(i=0; i<5; i++)
	{
		*(numeros+i) = i;
	}
	troca(numeros + 0, numeros + 3);
	printf("%d, %d\n", *(numeros+0), *(numeros + 3));
	return 0;
}
