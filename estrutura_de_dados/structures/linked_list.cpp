#include <stdio.h>
#include <stdlib.h>

typedef struct element {
    int value;
    struct element *next;
}list;

typedef struct head{
	element *first;
}head;

list *newList()
{
	list *l = (list*) malloc(sizeof(list));
	if (l== NULL) return NULL;

    l->next = NULL;
	return l;
}

int isEmpty(list *l)
{
	return(l->next==NULL);	
}

int size(list *l)
{
	int c;
	struct element *e = l->next;
	for(c=0; e!=NULL; c++)
	{
		e = e->next;
	}
	return c;
}

void *delList(list *l)
{
	while(l!=NULL)
	{
		list *tmp = l;
		l = l->next;
		free(tmp);
	}
}

void push_front(list *l, int value)
{
	list *e = (list *) malloc(sizeof(list));
    if(e == NULL) return;
    
    e->value = value;
    e->next = l->next;
    l->next = e;
}

void pop_front(list *l) //remover da frente
{
	if(l == NULL) return;
	list *tmp = l->next;
	if(tmp == NULL) return;
	l->next = tmp->next;
	free(tmp);
}

void print_list(list *l)
{
	l = l->next;
	if(l == NULL) return;
	while(1)
	{
		printf("%d\n", l->value);
		if(l->next == NULL) break;
		l = l->next;
	}
}

int main(int argc,char *argv[])
{
	list *list = newList();
	
	push_front(list, 12);
	push_front(list, 111);
	push_front(list, 3);
	push_front(list, 14);
	push_front(list, -21);
	
	pop_front(list);
	
	print_list(list);
	
	delList(list);
    return 0;
}
