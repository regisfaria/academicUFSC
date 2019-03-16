#include <stdio.h>
#include <string.h>



int main (void)
{
	struct tipo_aluno X;{
	char nome [30];
	char endereco[50];
	int matricula;
	int idade;
}
	strcpy(X.nome, "Regis");
	strcpy(X.endereco, "Getulio Vargas 123123");
	X.matricula = 123;
	X.idade = 23;
	printf("nome = %s", X.nome);
	
	return (0);
}
