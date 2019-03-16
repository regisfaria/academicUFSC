#include <stdio.h>

int main(void)
{
    int x, ano;
    float aumento = 1.5, aumentov, salario = 1000;

    salario = salario + 15;

    printf("Digite o ano atual:\n");
    scanf("%d", &ano);

    for(x=2007; x<=ano; x++)
    {
        aumento = aumento*2;
        aumentov = (aumento*1000)/100;
        salario = salario + aumentov;
    }
    printf("O salario atual = %f", salario);
    return(0);
}
