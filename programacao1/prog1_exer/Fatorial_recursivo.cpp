#include <stdio.h>

int fatorialRecursivo(int n)
{
	if(n==0) return(1);
	return(n*fatorialRecursivo(n-1));
}

int main(void)
{
	printf("%d", fatorialRecursivo(4));
	
	
	return(0);
}
