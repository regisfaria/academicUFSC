#include <stdio.h>

int abs(int w)
{
	if(w<0) w = w * (-1);
	
	return w;
}

int main (void) 
{ 
	int vetor[10], vetr[10], n, aux, maior, menor, maisd, menosd, x, y;
	vetor[0]=50; 
	vetor[1]=55; 
	vetor[2]=46; 
	vetor[3]=12; 
	vetor[4]=90; 
	vetor[5]=0; 
	vetor[6]=18; 
	vetor[7]=49; 
	vetor[8]=14; 
	vetor[9]=3;
	
	printf("\nDigite um numero para obter o valor mais distante e o valor mais proximo:");
	scanf("%d", &n);
	
	for(x=0; x<10; x++)			//Organizar o vetor < p/ >
	{
		for(y=x+1; y<10; y++)
		{
			aux = vetor[x];
			vetor[x] = vetor[y];
			vetor[y] = aux;
		}
	}
	
	for(x=0; x<10; x++)			//Obtendo as diferenças dos valores
	{
		aux = n - vetor[x];
		aux = abs(aux);
		vetr[x] = aux;
	}
	
	maior = vetr[0];
	menor = vetr[0];
	
	for(x=0; x<10; x++)			//Usa os valores absolutos da diferença e relaciona com a posição atribuida aos vetores, fornecendo o valor preciso da distancia.
	{
		if(vetr[x]>maior)
		{
			maior = vetr[x];
			maisd = vetor[x];
		}
		if(vetr[x]<menor)
		{
			menor = vetr[x];
			menosd = vetor[x];
		}
	}
	
	printf("O valor mais distante de %d = %d\nO valor mais proximo de %d = %d.", n, maisd, n, menosd);
	
	return 0;
}
