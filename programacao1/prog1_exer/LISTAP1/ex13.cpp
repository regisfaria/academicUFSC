#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void)
{
    char num[3];
    int x, y = 0, base, resultado = 0, potencia;
    
    printf("Digite o numero que sera convertido:\n");
    gets(num);
    printf("\nDigite a base do numero a ser convertido:");
    scanf("%d", &base);
    
    for(x=2; x>=0; x--)
    {
		potencia = pow(base, x);
		//printf("\nPotencia[%d]=%d", x, potencia);
		resultado = (num[y] * potencia) + resultado;
		printf("\n1 %d", num[y], num[y]);
		//printf("\nResultado[%d]=%d", x, resultado);
		y++;
		printf("\n2 %d", num[y], num[y]);
		//printf("\nY=%d", y);
	}
    
    printf("O numero convertido = %d", resultado);

    return (0);
}
