#include <stdio.h>

int M[3][4];

int main(void)
{
	M[0][0]=10; M[0][1]=12; M[0][2]=14; M[0][3]=16;
	M[1][0]=18; M[1][1]=30; M[1][2]=32; M[1][3]=34;
	M[2][0]=90; M[2][1]=70; M[2][2]=60; M[2][3]=108;
	
	for (int linha=0; linha<3; linha++)
	{
		for (int coluna=0; coluna<4; coluna++)
		{
			M[linha][coluna]=M[linha][coluna]*3;
		}
	}
	for (int linha=0; linha<3; linha++)
	{
		for (int coluna=0; coluna<4; coluna++)
		{
			printf("%d");
		}
	}
	
}
