#include <stdio.h>

int main(void)
{
	int M[3][8], R[3][8], k, j, menor, aux;
	
	for(k=0; k<3; k++)			//atribuindo valores para a matriz
	{
		for(j=0; j<8; j++)
		{
			printf("\nDigite um valor para M[%d][%d]:", k, j);
			scanf("%d", &M[k][j]);
		}
	}
	menor = M[0][0];
	
	for(k=0; k<3; k++)			//encontrando o menor termo da matriz
	{
		for(j=0; j<8; j++)
		{
			if(M[k][j]<menor) menor = M[k][j];
		}
	}
	
	for(k=0; k<3; k++)			//obter matriz R
	{
		for(j=0; j<8; j++)
		{
			R[k][j] = M[k][j] * menor;
		}
	}
	
	for(k=0; k<3; k++)			//printar matriz
	{
		for(j=0; j<8; j++)
		{
			printf("%d ", R[k][j]);
		}
		printf("\n");
	}
	
	return 0;
}
