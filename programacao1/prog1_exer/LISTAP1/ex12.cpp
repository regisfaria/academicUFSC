#include <stdio.h>

int main (void) 
{ 
	int resposta=0; 
	int valor, novo_valor,contador=1, aux; 
	
	printf("Jogador A deve digitar um numero de 0 a 30: "); 
	scanf("%d", &valor);
	
	while (resposta==0) 
	{ 
		printf("\nJogador B deve digitar um numero: ");
		scanf("%d", &novo_valor);
		if(novo_valor == valor) break;
		if(novo_valor < valor) printf("Dica: Eh maior.\n");
		if(novo_valor > valor) printf("Dica: Eh menor.\n");
		contador = contador + 1;
	} 
	printf("Acertou o numero em %d tentativas!", contador);
	
	return 0;
}

