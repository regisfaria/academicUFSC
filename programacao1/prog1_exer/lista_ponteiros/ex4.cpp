#include <stdio.h>

void strcopia(char *dest, char *orig)
{
	char aux, *pcomp = "\0";
	int x;
	
	while(1)
	{
		if(*orig == *pcomp) break;
		*dest = *orig;
		orig++;
		dest++;
	}
}

int main(void)
{
	char vetor1[] = "Faria";
	char vetor2[] = "Regis";
	int x;
	
	strcopia(vetor1, vetor2);
	for(x=0; x<5; x++)
	{
		printf("%c", vetor1[x]);
	}
	return 0;
}
