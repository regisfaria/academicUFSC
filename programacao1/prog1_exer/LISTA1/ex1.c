#include <stdio.h>

int main (void)
{
    int numero, fatorial, x;
    fatorial=1;

    printf("Digite um numero que se deseja saber o fatorial:\n");
    scanf("%d", &numero);

    for(x=numero; x>0; x--)
    {
        fatorial = x*fatorial;
    }

    printf("\n%d! = %d.", numero, fatorial);
    return(0);
}
