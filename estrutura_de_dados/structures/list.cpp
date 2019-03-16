#include <stdio.h>
#include <stdlib.h>

typedef struct List{
	int *vector;		//endere�o do vetor
	int vecSize;		//tamanho do vetor
	int listSize;		//quantos elementos tem na lista
} list;

list *newList()
{
	list *l = (list*) malloc(sizeof(list));	//cria struct
	if (l== NULL) return NULL;
	
	l->listSize = 0;	//quantos elementos tem na lista
	l->vecSize = 10;	//diz que o tamanho do vetor � = a 10
	
	l->vector =(int *) malloc(l->vecSize*sizeof(int));		//aloca memoria para o vetor
	if(l->vector == NULL)
	{
		free(l);
		return NULL;
	}
	return l;
}

void *delList(list *l)
{
	//if(l == NULL) return false;
	free(l->vector);
	free(l);
}

void *insertList(list *l, int pos, int value)
{
	//if(l == NULL) return false;
	
	if(pos < 0) pos = 0;
	if(pos > l->listSize) pos = l->listSize;
	
	if(l->listSize == l->vecSize)
	{
		int *v =(int *) realloc(l->vector, l->vecSize*2*sizeof(int));
		//if(v == NULL) return false;
		l->vector = v;
		l->vecSize *= 2;
	}
	
	for(int i = l->listSize; i>pos; i--)
	{
		l->vector[i] = l->vector[i-1];
	}
	l->vector[pos] = value;
	l->listSize++;
}

int search(list *l, int value)
{
	if(l == NULL) return -1;
	
	for(int i=0; i<l->listSize; i++)
	{
		if(l->vector[i] == value) return i;
	}
	printf("Value is not on the list.\n");
	return -1;
}

void *delValue(list *l, int pos)
{
	//if(l == NULL) return false;
	//if(pos < 0 || pos >= l->listSize) return false;
	
	l->listSize--;
	for(int i=pos; i < l->listSize; i++)
	{
		l->vector[i] = l->vector[i+1];
	}
}

void delEleValue(list *l, int value)
{
	delValue(l, search(l, value));
}

void printList(list *l)
{
	for(int i=0; i<l->listSize; i++)
	{
		printf("%d ", l->vector[i]);
	}
}

int main(int argc, char* argv[])
{
	list *l1 = newList();
	
	insertList(l1, 0, 55);
	insertList(l1, 1, 60);
	insertList(l1, 2, 5);
	insertList(l1, 3, 15);
	insertList(l1, 4, 45);
	insertList(l1, -1, 100);
	insertList(l1, 6, 4533);
	insertList(l1, 7, 456);
	insertList(l1, 8, 455);
	insertList(l1, 9, 4534);
	insertList(l1, 10, 477);
	delValue(l1, 0);
	
	int j; 
	j = search(l1, 456);
	printf("%d\n", j);
	
	delEleValue(l1, 477);
	
	printList(l1);
	
	delList(l1);
	return 0;
}
