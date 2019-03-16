#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno {
	char matri[3], nome[30];
	float nota[3];
} Aluno;

/*
static int inc = 0;

Aluno setAluno(Aluno set)			//Preenche os alunos atribuindo notas aleatorias
{
	printf("\nDigite o nome do aluno(a): ");
	scanf("%s", &set.nome);
	set.nota[0] = rand() % 10;
	set.nota[1] = rand() % 10;
	set.nota[2] = rand() % 10;
	printf("\nDigite a matricula: ");
	scanf("%s", &set.matri);
	inc++;
	printf("\nSucesso! %d/50\n", inc);
	return set;
}
*/


int main(void)
{
	FILE *f = fopen("alunos.bin", "r+b");
	int i;
	float media;
	Aluno *alunos = (Aluno *) calloc(50, sizeof(Aluno));
	
	fread(alunos, sizeof(Aluno), 50, f);
	fclose(f);
	for(i=0; i<50; i++)
	{
		printf("\nMatricula: %s", alunos[i].matri);
		printf("\nNome: %s", alunos[i].nome);
		media = (alunos[i].nota[0] + alunos[i].nota[1] + alunos[i].nota[2]);
		printf("\nNota media: %f", media);
		if(media >= 8.5) printf("\nConceito: Excelente");
		if(media < 8.5 && media >= 7.0) printf("\nConceito: Bom");
		else printf("\nConceito: Preocupante");
		printf("\n\n");
	}
	free(alunos);
	return 0;
}
