#include <stdio.h>
#include <stdlib.h>

void merge(int *vec, int m, int size)
{
	int *vaux = (int *) malloc(size*sizeof(int));
	if(vaux == NULL) return -1;
	
	int *v1 = vaux, *v2 = vaux + m;
	int t1 = m, t2 = size-m;
	int i1, i2;
	
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

void merge_sort(int *vec, int size)
{
	if(size <= 1) return;
	int m=size/2;
	
	merge_sort(vec, m);
	merge_sort(vec+m, size-m);
	merge(vec, m, size);
}

int main(int argc, char* argv[])
{
	int vector[] = {5,9,7,1,3,6,-5,-7,15,97,-88};
	int tam=11, i;
	
	printf("Vector: ");
	for(i=0; i<tam; i++)
	{
		printf("%d ", vector[i]);
	}
	printf("\n");
	
	merge_sort(&vector, tam);
	
	printf("Vector after merge sort: ");
	for(i=0; i<tam; i++)
	{
		printf("%d ", vector[i]);
	}
	return 0;
}
