#include <stdio.h>
#include <stdlib.h>

void selection_sort(int *vec, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		int m=i, j;
		for(j=i+1; j<size; j++)
		{
			if(vec[j] < vec[m]) m = j;
		}
		int tmp;
		if(m != i)
		{
			tmp = vec[m];
			vec[m] = vec[i];
			vec[i] = tmp;
		}
	}
}


int main(int argc, char *argv[])
{
	int n;
	printf("What is the length of your vector?\n");
	scanf("%d", &n);
	int *vector =(int *) calloc(n, sizeof(int));
	
	int i, c=1;
	printf("Set the values of the vector:");
	for(i=0; i<n; i++)
	{
		printf("%d: ", c);
		scanf("%d", &vector[i]);
		c++;
	}
	selection_sort(vector, n);
	printf("Vector after selection sort:\n");
	for(i=0; i<n; i++)
	{
		printf("%d ", vector[i]);
	}
	
	return 0;
}
