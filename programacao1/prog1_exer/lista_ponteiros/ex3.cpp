#include <stdio.h>

int meulen(char *st)
{
	char teste;
	int tamanho= 0;
	char *p = "\0";
	while(1)
	{
		if(*st == *p) return (tamanho);
		st++;
		tamanho++;	
	}	
}

int main(void)
{
	char str[]= "0000000000000000000000000";
	int len;
	len = meulen(str);
	
	printf("O tamanho da string eh: %d.", len);
	
	return 0;
}
