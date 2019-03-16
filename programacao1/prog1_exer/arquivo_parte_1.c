#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	FILE *exemplo;
	exemplo = fopen("arq.txt", "w");		//r, w ou a
	
	int i, v[5] = {1,5,2,4,7};
	char string[100] = "Testando funcoes stdlib xdd!!", c, *result, *nome[30];
	float meu_float = 2;
	
	if(exemplo == NULL)
	{
		printf("Erro no arquivo\n");
		system("pause");
		exit(1);
	}
	
	/*printf("Escreva uma mensagem:\n");  	//modo: w; escreve msg caracter por caracter 
	gets(string);
	
	for(i=0; i<strlen(string); i++)
	{
		fputc(string[i], exemplo);
	}
	
	*/
	/*while((c=fgetc(exemplo)) != EOF)		//modo: r; mostra o arq.txt caracter a caracter
	{
		printf("%c\n", c);
	}
	*/
	
	/*printf("Escreva uma mensagem:\n");		//modo: w; escreve string
	gets(string);
	//fputs(string, exemplo);
	fputs(string, stdout);
	*/
	
	/*result = fgets(string,30, exemplo);		//modo: r; le string de arquivo
	if(result == NULL)
	{
		printf("Erro na leitura.\n");
	}
	else
	{
		printf("%s", string);
	}
	*/
	
	/*printf("Digite seu nome:");				//modo: r; le nome do teclado e mostra
	fgets(nome, 30, stdin);
	if(nome == NULL)
	{
		printf("\nErro na leitura.\n");
	}
	else
	{
		printf("\nO nome digitado foi: %s", nome);
	}
	*/
	
	// teste com fwrite e fread
	
	//fwrite(string, sizeof(char), strlen(string), exemplo);	//escrever uma string de char em um arquivo
	fwrite(v, sizeof(int), 5, exemplo);
	
	fclose(exemplo);
	return 0;
}
