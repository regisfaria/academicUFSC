#include <stdio.h>

int main(void)
{
	int A[2][3]={ {10, 20, 30}, {40, 50, 60} };
	int B[3][2]= { {1,2}, {3,4}, {5,6} };
	int P[2][2];
	int somatermos1 = 0;
	int somatermos2 = 0;
	
	
	for (int x=0; x<2; x++)
	{
		for(int y=0; y<3; y++)
		{
			somatermos1 = somatermos1 + A[x][y]*B[y][x];
			somatermos2 = somatermos2 + A[x][y]*B[2-y][1-x];
		}	
		P[x][x]= somatermos1;
		P[x][1-x]= somatermos2;
		somatermos1 = 0;
		somatermos2 = 0;
	}
	
	for (int x=0; x<2; x++)			//mostrar valores
	{
		for(int y=0; y<2; y++)
		{
			printf("%d . . .\n", P[x][y]);
		}
	}
	return (0);
}
