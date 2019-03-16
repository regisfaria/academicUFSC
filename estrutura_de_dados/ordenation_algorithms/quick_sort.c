#include <stdlib.h>
#include <stdio.h>

void quicksort(int values[], int began, int end)
{
	int i, j, pivo, aux;
	i = began;
	j = end-1;
	pivo = values[(began + end) / 2];
	while(i <= j)
	{
		while(values[i] < pivo && i < end)
		{
			i++;
		}
		while(values[j] > pivo && j > began)
		{
			j--;
		}
		if(i <= j)
		{
			aux = values[i];
			values[i] = values[j];
			values[j] = aux;
			i++;
			j--;
		}
	}
	if(j > began)
		quicksort(values, began, j+1);
	if(i < end)
		quicksort(values, i, end);
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
