 #include <stdio.h>

void funcao1(void)
{
	printf("Eu sou a funcao 1");
}
void funcao2(void)
{
	printf("Eu sou a funcao 2");
}
void funcao3(void)
{
	printf("Eu sou a funcao 3");
}

int main(void)
{
	int n;	
	
	printf("Entre com um numero de 0 a 2: \n");
	scanf("%d", &n);
	
	void(*vetorfuncao[3])(void); //primeiro parametro void é o tipo da função que o *vetorfunção vai ser; ultimo void o tipo que ele vai receber dentro dele
	vetorfuncao[0]= &funcao1;
	vetorfuncao[1]= &funcao2;
	vetorfuncao[2]= &funcao3;
	
	vetorfuncao[n]();
	return 0;
}
