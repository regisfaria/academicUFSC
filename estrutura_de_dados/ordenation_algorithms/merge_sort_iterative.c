#include <stdio.h>
#include <stdlib.h>

int min(int x, int y)
{
	return (x<y)?x:y;
}

void merge(int *vec, int m, int size)
{
	int *vaux = (int *) malloc(size*sizeof(int));
	if(vaux == NULL) return;
	
	int *v1 = vaux;
	int *v2 = vaux + m;
	
	int t1 = m;
	int t2 = size-m;
	
	int i1;
	int i2;
	
	for(i1=0; i1<t1; i1++)
	{
		v1[i1] = vec[i1];
	}
	for(i2=0; i2<t2; i2++)
	{
		v2[i2] = vec[m+i2];
	}
	i1=i2=0;
	int i;
	for(i=0; i<size; i++)
	{
		if(i1 >= t1) vec[i] = v2[i2++];
		else if(i2 >= t2) vec[i] = v1[i1++];
		else if(v1[i1] < v2[i2]) vec[i] = v1[i1++];
		else vec[i] = v2[i2++];
	}
	free(vaux);
}

void mergeSort(int *vec, int size)
{
	int i, j;
	
	for(i=1; i<size; i*=2)
	{
		for(j=0; j<size; j+=2*i)		//tentar com -> size-1
		{
			int *v = vec+j;
			int s = min(size-j, 2*i);
			int mid = i;
			
			if(mid<s) merge(v, mid, s);
		}
	}
}

void print(int *vec, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("%d ", vec[i]);
	}
	printf("\n");
}

int main(int argc, char argv[])
{
	int vector[] = {1, 5, 97, 100, -5, 4, 7, 98, 50, -1, 3, 197, 1, -7, 0, 0};
	int tam = sizeof(vector)/sizeof(vector[0]); 			//tamanho do vetor
	
	printf("Vector not sorted:\n");
	print(vector, tam);
	
	mergeSort(vector, tam);
	
	printf("Vector sorted:\n");
	print(vector, tam);
	
	return 0;
}
