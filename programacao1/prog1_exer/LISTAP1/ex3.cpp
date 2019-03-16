#include <stdio.h>

int main(void)
{
    int vec[3];
    int x, z, mmc = 1, divisor = 2, vzs = 0, a;

    for(x=0; x<=2; x++)
    {
        printf("Digite um valor:\n");
        scanf("%d", &vec[x]);
    }
    while(1)
    {
        for(z=0; z<3; z++)
        {
			if(vec[z]%divisor==0)
            {
                vzs = vzs+1;
                vec[z] = (vec[z]/divisor);
            }
        }
		if(vzs>0) mmc = mmc * divisor;
		if(vzs==0) divisor = divisor +1;
		vzs = 0;
        if(vec[0]==1 && vec[1]==1 && vec[2]==1) break;
    }

    printf("O mmc = %d", mmc);

    return(0);
}

