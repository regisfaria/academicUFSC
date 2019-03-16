#include <stdio.h>

void troca(int *a, int *b)
{
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

int main(void)
{
	int t1 = 12; 			// teste normal
	int t2 = 100;
	troca(&t1, &t2);
	
	printf("T1: %d - T2: %d\n", t1, t2);
	
	int vetor[] = {1, 2, 3, 4, 5}, x;			//teste vetor
	troca(vetor, &vetor[3]);
	for(x=0; x<5; x++)
	{
		printf("%d", vetor[x]);
	}
	return 0;
}
