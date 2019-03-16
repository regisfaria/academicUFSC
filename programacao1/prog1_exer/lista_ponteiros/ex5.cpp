#include <stdio.h>
#include <string.h>

void catstr(char *destino, char *origem)
{
	char *pcomp = "\0";
	
	while(1)
	{
		if(*destino == *pcomp) break;
		destino++;
	}
	while(1)
	{
		if(*origem == *pcomp) break;
		*destino = *origem;
		destino++;
		origem++;
	}
}

int main(void)
{
	char st1[200], st2[200];
	
	strcpy(st1, "Universidade Publica ");
	strcpy(st2, "e gratuita");
	
	catstr(st1, st2);
	printf("O resultado: %s", st1);
	return 0;
}
