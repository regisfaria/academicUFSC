#include <stdio.h>

int main(void)
{
    int cont=0, x, n, soma = 0;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &n);
    while(1)
    {
        if (n/10 !=0) soma = soma + n%10;
        if (n/10 == 0)
        {
            soma = soma + n%10;
            break;
        }
        n = n/10;
    }
    printf("\nA soma dos digitos = %d.", soma);
    return(0);
}