#include <stdio.h>

int main(void)
{
    int x, c, p, div, pato = 0, coelho = 0;

    printf("");
    scanf("%d", c);
    printf("");
    scanf("%d", p);

    if(p%c == 0)
    {
        div = p;
        while(1)
        {
            if(div%c == 0) pato = pato+1;
            if(div/c == 0) break;
            div = div/2;
        }
    }




    return(0);
}
