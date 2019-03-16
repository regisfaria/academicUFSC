#include <stdio.h>
#include <stdlib.h>

void swap(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void build_heap(int *vec, int n)
{
	int i;
	for(i=1; i<n; i++)
	{
		int f = i*2;
		while(f>1 && v[f/2] < v[f])
		{
			swap(v[f/2], v[f]);
			f /=2;
		}
	}
}

void heap_sort(int *vec, int n)
{




}

int main(int argc, char **argv)
{
	printf("What is the length of your vector?");
	scanf("%d", &n);
	int *vector = (int *) malloc((n+1)*sizeof(int));
	vector[0] = NULL;
	
	int i, c=1;
	printf("Enter the values of the vector:");
	for(i = 1; i < n; i++)
	{
		printf("\n%d: ", c);
		scanf("%d", &vector[i]);
		c++;
	}
	heap_sort(vector, n);

	printf("\nVector after Max heap:\n");
	for(int i = 0; i < n; i++)
	{
		printf("%d ", vector[i]);
	}
	printf("\n");


	return 0;
}