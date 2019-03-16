#include <stdio.h>
#include <stdlib.h>

// ------- vetor começa com o 0 NULL ------- //
// n = quantidade de elementos //

void heapify(int *vec, int i, int size)
{
	int fe = i*2;
	if(fe>size) return;
	int fd = fe+1;
	
	if(fd <=size && vec[fd]>vec[fe]) fe = fd;
	if(vec[fe] > vec[i])
	{
		int aux = vec[fe];
		vec[fe] = vec[i];
		vec[i] = aux;
		heapify(vec, fe, size);
	}
}

void build_max_heap(int *vec, int n)
{
	int i;
	for(i=n/2; i>0; i--)
	{
		heapify(vec, i, n);
	}
}

void heap_sort(int *vec, int n)
{
	build_max_heap(vec, n);
	/*for(; n>1; n--)
	{
		int aux = vec[n];
		vec[n] = vec[1];
		vec[1] = aux;
		heapify(vec, 1, n-1);
	}*/
}

int main(int argc, char *argv[])
{
	int n;
	printf("What is the length of your vector?");
	scanf("%d", &n);
	int *vector = (int *) malloc(n*sizeof(int));
	
	int i, c=1;
	printf("Enter the values of the vector:");
	for(i = 0; i < n; i++)
	{
		printf("\n%d: ", c);
		scanf("%d", &vector[i]);
		c++;
	}
	heap_sort(vector, n);

	printf("\nVector after Max heap:");
	for(int i = 0; i < n; i++)
	{
		printf("%d ", vector[i]);
	}
	printf("\n");

	return 0;
}
