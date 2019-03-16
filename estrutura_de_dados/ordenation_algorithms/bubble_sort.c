#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int *vector, int size)
{
	int i, j, tmp;
	for(i=1; i<size; i++)
	{
		for(j=0; j<size-1; j++)
		{
			if(vector[j] > vector[j+1])
			{
				tmp = vector[j];
				vector[j] = vector[j+1];
				vector[j+1] = tmp;
			}
		}
	}
}



int main(int argc, char **argv)
{
	int n;
	printf("What is the length of your vector??\n");
	scanf("%d", &n);
	
	int *vec =(int *) malloc(n*sizeof(int));

	printf("Set the values of your vector:");
	int i, c=1;
	for(i=0; i<n; i++)
	{
		printf("\n%d: ", c);
		scanf("%d", &vec[i]);
		c++;
	}
	bubble_sort(vec, n);
	printf("Vector sorted after bubble sort:\n");
	for(i=0; i<n; i++)
	{
		printf("%d ", vec[i]);
	}
	printf("\n");
	return 0;
}
