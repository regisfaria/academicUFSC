#include <stdio.h>
#include <stdlib.h>

int comp(int a, int b, int M)
{
	if(a%M == b%M)
	{
		if(a%2 != 0 && b%2 != 0) return a > b;
		if(a%2 == 0 && b%2 == 0) return a < b;		
		if(a%2 != 0 && b%2 == 0) return 1;
		return 0;
	}
	else return a%M<b%M;
}


void merge(int *vec, int m, int size, int M)
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
		else if(comp(v1[i1], v2[i2], M)) vec[i] = v1[i1++];
		else vec[i] = v2[i2++];
	}
	free(vaux);
}

void merge_sort(int *vec, int size, int M)
{
	if(size <= 1) return;
	int m=size/2;
	
	merge_sort(vec, m, M);
	merge_sort(vec+m, size-m, M);
	merge(vec, m, size, M);
}

int main(int argc, char* argv[])
{
	int N, M;
	int vector[10000];
	
	scanf("%d %d", &N, &M);
	while(N!=0 && M!=0)
	{
		int i;
		for(i=0; i<N; i++)
		{
			scanf("%d", &vector[i]);
		}
		
		merge_sort(vector, N, M);



		printf("%d %d\n", N, M);
		for(i=0; i<N; i++)
		{
			printf("%d\n", vector[i]);
		}
		scanf("%d %d", &N, &M);
	}
	printf("0 0\n");

	return 0;
}
