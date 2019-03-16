#include <stdio.h>

int main(void)
{
    int  num, soma, maior, menor, x, aux;
    x=0;
    maior = 0;
    soma = 0;
    menor = 0;
    aux = 0;
    printf("Digite -999 para ver o resultado.\n");
    printf("Digite um numero:\n");
    scanf("%d", &num);
    maior = num;
    menor = num;
    while(x==0)
    {
        if (num>=0)
        {
            if (num > aux) maior = num;
            if (num < aux) menor = num;
            if (num%2 == 0)  soma = soma + num;
        }
        aux = num;
        printf("Digite um numero:\n");
        scanf("%d", &num);
        if (num == -999) break;
    }
    printf("O maior valor digitado foi %d e o menor foi %d.\n", maior, menor);
    printf("A soma dos numeros pares positivos digitados = %d.", soma);
    return(0);
}
