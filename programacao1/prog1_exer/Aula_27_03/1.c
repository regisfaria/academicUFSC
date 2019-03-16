#include <stdio.h>
#define MAX 100

int maior (int x, int y)
{
    if (x > y) return x;
    return y;
}

int testa (int k)
{
    int w;

    printf("%d\n,", w);
    w=k;
}


void mostraMSG ( char st[])
{
    printf("MSG = %s\n", st);
}

int main(void)
{
    int x = 100;
    int c = 0;
    mostraMSG("oi mundo");
    printf (" O maior numero eh : %d \n", maior(2, maior(10, 6)));
    for (c=1; c<10; c++)
    {
        testa(x);
    }


    return 0;
}
