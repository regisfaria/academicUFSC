#include <stdio.h>
#include <string.h>

int main(void)
{
	char st1[200];
	strcpy(st1, "Universidade Publica e gratuita");
	char *p = "\0", *p2 = "g", *pstring;
	pstring = st1;
	
	while(1)
	{
		if(*pstring == *p2)
		{
			while(2)
			{
				if(*pstring == *p) break;
				printf("%c", *pstring);
				pstring++;
			}
			break;
		}
		pstring++;
	}
	return 0;
}
