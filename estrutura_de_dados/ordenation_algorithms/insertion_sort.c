#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int *vec, int size)
{
	int i, j;
	for(i=1; i<size; i++)
	{
		int a = vec[i];
		for(j=i-1; j>=0 && vec[j] > a; j--)
		{
			vec[j+1] = vec[j];
		}
		vec[j+1] = a;
	}
}

int main(int argc, char *argv[])
{
	int n;
	printf("What is the length of your vector?\n");
	scanf("%d", &n);
	int *vector=(int *) malloc(n*sizeof(int));
	
	printf("Set the values of the vector:");
	int i, c=1;
	for(i=0; i<n; i++)
	{
		printf("\n%d: ", c);
		scanf("%d", &vector[i]);
		c++;
	}
	insertion_sort(vector, n);
	printf("Vector after insertion sort:\n");
	for(i=0; i<n; i++)
	{
		printf("%d ", vector[i]);
	}
	printf("\n");
	return 0;
}
