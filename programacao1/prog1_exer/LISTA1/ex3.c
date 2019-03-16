#include <stdio.h>

int main(void)
{
    int  num, soma=0, invalido=0, x=0, med;
    float nmed=0;
    printf("Digite -999 para ver o resultado.\n");
    printf("Digite um numero:\n");
    scanf("%d", &num);
    while(x==0)
    {
        if (num == -999) break;
        if (num<0 || num%2 !=0) invalido = invalido +1;
        else
        {
            soma = soma + num;
            nmed = nmed +1;
        }
        med = soma/nmed;
        printf("Digite um numero:\n");
        scanf("%d", &num);
    }
    printf("A quantidade de numeros invalidos digitados foi %d.\n", invalido);
    printf("A media dos numeros pares positivos digitados = %f.", nmed);
    return(0);
}
