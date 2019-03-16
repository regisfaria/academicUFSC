#include <stdio.h>

int lenstr(char *vet)
{
	char *p;
	int tamanho = 0, x=0;
	*p = vet;

	while(1)
	{
		if(*p == 0) return tamanho;
		tamanho++;
		p++;
	}
}

int main(void)
{
	char vet[5] = {1, 2, 3, 4, 5};
	int x;
	x = lenstr(vet[5]);
	printf("%d", x);

	return 0;
}

