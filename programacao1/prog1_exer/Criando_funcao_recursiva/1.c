#include <stdio.h>
#include <stdlib.h>

void divibin(int n, int b)
{
    static int r;
    if(n/2!=0)
    {
        divibin(n/b, b);
    }
    r = n%2;
    printf("%d ", r);

}

int main(void)
{
    int x =120;
    int y =2;
    divibin(x,y);

    return (0);
}
