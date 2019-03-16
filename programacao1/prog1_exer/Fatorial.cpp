#include <stdio.h>

int fatorial(int n)
{
	int acc= n;
	for(int x=1; x<n; x++)
	{
		acc= acc*(n-x);
	}
	return (acc);
}

int main(void)
{
	printf("%d", fatorial(4));
	
	return (0);
}
