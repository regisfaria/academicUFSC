#include <stdio.h>
#include <string.h>

int main(void)
{
	char frase[140], l1[1], l2[1]; 
	int x, carac = 0;
	
	printf("\nDigite uma frase com ate 140 caracteres:");
	gets(frase);
	printf("\nDigite uma letra que esteja contida na frase:");
	scanf("%s", l1);
	printf("\nDigite outra letra:");
	scanf("%s", l2);
	
	for(x=0; x<140; x++)
	{
		if(frase[x] == l1[0])
		{
			while(frase[x]!=l2[0])
			{
				carac = carac + 1;
				x++;
			}
			break;
		}
	}
	
	printf("\nEntre a letra %c e %c existem %d caracteres.", l1[0], l2[0], carac);
	
	return 0;
}
