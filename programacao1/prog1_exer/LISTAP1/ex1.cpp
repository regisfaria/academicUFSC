#include <stdio.h>

int EH_PRIMO(int n)
{
	int x;
	for(x=2; x<n; x++)
	{
		if(n%x == 0) return 0; 
	}
	
	return 1;
}

int main(void)
{
	int z;
	z=EH_PRIMO(8);
	printf("\n%d", z);
	
	return 0;
}
