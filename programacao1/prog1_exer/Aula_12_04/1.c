#include <stdio.h>

int f3(int x, int y)
{
    if (x>y) return -1;
    else{
        if(x==y) return 1;
        else return x * f3(x+1, y);
    }
}

int main (void)
{
    printf("%d", f3(4,7));


    return (0);
}
