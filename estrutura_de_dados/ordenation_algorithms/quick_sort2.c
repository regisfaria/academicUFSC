#include <stdio.h>
#include <stdlib.h>

void swap(int a, int b)
{
	int tmp;
	tmp = b;
	b = a;
	a = tmp;
}

int partition(int *vec, int low, int high)
{
	int i = (low -1), j;
	int pivot = vec[high];

	for(j=low; j<high; j++)
	{
		if(vec[j] < pivot)
		{
			i++;
			swap(vec[i], vec[j]);
		}
	}
	swap(vec[i+1], vec[high]);
	return (i+1);
}

void quicksort(int *vec, int low, int high)
{
	if(low < high)
	{
		int pi = partition(vec, low, high);

		quicksort(vec, low, pi-1);
		quicksort(vec, pi+1, high);
	}
}


int main(int argc, char **argv)
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
	quicksort(vector, 0, n);

	printf("\nVector after quick sort:");
	for(int i = 0; i < n; i++)
	{
		printf("%d ", vector[i]);
	}
	printf("\n");

	return 0;
}
