#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
	char value[305];
	int stackSize;
}stack;

void push(char c, stack *pilha)
{
	pilha->value[pilha->stackSize++] = c;
}

char topStack(stack *pilha)
{
	if (pilha->stackSize == 0) return -1;
	return pilha->value[pilha->stackSize-1];
}

void pop(stack *pilha)
{
	if(pilha->stackSize == 0) return -1;
	pilha->stackSize--;
}

int isEmpty(stack *pilha)
{
	return (pilha->stackSize == 0);
}

int main(int argc, char argv[])
{
	stack s;
	int N, i, j;
	char expression[305], tmp;
	
	scanf("%d", &N);
	for(i=0;i<N; i++)
	{
		scanf("%s", &expression);
		s.stackSize = 0;
		j=0;
		while(expression[j] != '\0')
		{
			if(expression[j] != '*' && expression[j] != '+' && expression[j] != '-' && expression[j] != '/' && expression[j] != '^' && expression[j] != '(' && expression[j] != ')')
			{
				printf("%c", expression[j]);
			} 
			if(expression[j] == '+' ||expression[j] == '-' ||expression[j] == '*' ||expression[j] == '/' ||expression[j] == '^')
			{
				tmp = topStack(&s);
				while(s.stackSize != 0 && ((tmp == '+' && expression[j] == '+' ||tmp == '+' && expression[j] == '-'|| tmp == '-' && expression[j] == '-' || tmp == '-' && expression[j] == '+' || tmp == '*' && expression[j] != '^' || tmp == '/' && expression[j] != '^') || (tmp == '^' && expression[j] != '^')))
				{
					printf("%c", tmp);
					pop(&s);
					tmp = topStack(&s);
				}
				push(expression[j], &s);
			}
			if(expression[j] == '(') push(expression[j], &s);
			if(expression[j] == ')')
			{
				tmp = topStack(&s);
				while(tmp != '(')
				{
					printf("%c", tmp);
					pop(&s);
					tmp = topStack(&s);
				}
				pop(&s);
			}
			j++;
		}
		while(s.stackSize != 0)
		{
			tmp = topStack(&s);
			printf("%c", tmp);
			pop(&s);
		}
		printf("\n");
	}
	
	return 0;
}
