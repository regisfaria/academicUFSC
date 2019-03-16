#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
	FILE *fp = fopen("arq.bin", "wb");
	char string[100];
	int i, vetor[5] = {5, 21, 31, 5, 6663};
	
	/*
	printf("Escreva uma mensagem: ");
	gets(string);
	*/
	
	/*
	while(string[i] != '\0')
	{
		fputc(string[i], fp);
		i++;
	}
	*/
	
	//fprintf(fp, "%s", string);
	
	fwrite(vetor, sizeof(int), 5, fp);
	
	fclose(fp);
	
	return 0;
}

