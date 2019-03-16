#include <stdio.h>

int eleva(int b, int p)
{
    int x, r = 1;

    for(x=0; x<p; x++)
    {
        r = r * b;
    }


    return (r);
}

int main(void)
{
    int z;
    z = eleva(2,16);
    printf("%d", z);


    return (0);
}
