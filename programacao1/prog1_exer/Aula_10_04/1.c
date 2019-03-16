#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int meustrcmp(char s1[], char s2[]) // função para comparar strings
{
    int t1 = strlen(s1);
    int t2 = strlen(s2);
    int menor;
    int x;

    if (t1 < t2) menor = t1;
    else menor = t2;

    for(x=0; x<menor; x++)
    {
        if (s1[x]<s2[x]) return (-1);
        if (s1[x]>s2[x]) return (1);
    }
    if (t1==t2) return(0);
    if(t1<t2) return(-1);
    else return(1);
}



int main(void)
{
    char st[4] = "UFC";
    char st2[8] = "Federal";
    int x;

    x = meustrcmp(st, st2);

    printf("%d", x);


    return(0);
}
