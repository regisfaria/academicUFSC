#include <stdio.h>
#include <math.h>

int main(void)
{
	int vetx[] = {5, 12, 18, 16, 14};
	int vety[] = {5, 10, 12, 7, 3};
	int x, y;
	float perimetro = 0, teste;
	
	for(x=0; x<5; x++)
	{
		for(y=x+1; y<=5; y++)
		{
			perimetro = perimetro + (sqrt((pow((vetx[x]-vetx[y]), 2))+(pow((vety[x]-vety[y]), 2))));
			teste = (sqrt((pow((vetx[x]-vetx[y]), 2))+(pow((vety[x]-vety[y]), 2))));		//se omitir a linha 16 e 17 o perimetro da outro valor, pq??? perguntar
			printf("\n%f", teste); 
		}
	}
	perimetro = perimetro + (sqrt((pow((vetx[4]-vetx[0]), 2))+(pow((vety[4]-vety[y]), 2))));
	
	printf("\n-----O perimetro deste poligno = %f", perimetro);
	
	
	
	return 0;
}
