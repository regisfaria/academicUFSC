#include <stdio.h>
#include <stdlib.h>

typedef int bool;
#define true 1
#define false 0


typedef struct node
{
	char key;
	struct node *left;
	struct node *right;
}node;

node *newNode(char key) 
{ 
    node *tmp =  (node *)malloc(sizeof(node)); 
    tmp->key = key; 
    tmp->left = tmp->right = NULL;
    return tmp; 
} 

node *search(struct node *root, char key) 
{
	if(root == NULL || root->key == key) return root;
	else if(key < root->key) search(root->left, key);
	else search(root->right, key);
}


node *insert(struct node *root, char key) 
{ 
    if (root == NULL) return newNode(key); 
    if (key < root->key) root->left = insert(root->left, key); 
    else if (key > root->key) root->right = insert(root->right, key);    
  
    return root; 
}

void prefix(struct node *root, bool *p)
{
	if(root != NULL)
	{
		if(*p)
		{
			printf("%c", root->key);
			*p = false;	
		}
		else
		{
			printf(" %c", root->key);
		}
		prefix(root->left, p);
		prefix(root->right, p);
	}
}

void infix(struct node *root, bool *p)
{
	if(root != NULL)
	{
		infix(root->left, p);
		if(*p)
		{
			printf("%c", root->key);
			*p = false;	
		}
		else
		{
			printf(" %c", root->key);
		}
		infix(root->right, p);
	}
}

void postfix(struct node *root, bool *p)
{
	if(root != NULL)
	{
		postfix(root->left, p);
		postfix(root->right, p);
		if(*p)
		{
			printf("%c", root->key);
			*p = false;	
		}
		else
		{
			printf(" %c", root->key);
		}
	}
}

int main(int argc, char **argv)
{
	char command[20];
	node *tree = NULL;
	int s = 20;

	while(fgets(command,s,stdin) != NULL)				//fgets(command,s,stdin) != NULL
	{
		if(command[0] == 'I' && command[1] == ' ')		//inserção
		{
			tree = insert(tree, command[2]);	
		}
		else if(command[0] == 'P' && command[1] == ' ')		//busca
		{
			node *querry = search(tree, command[2]);
			if(querry == NULL)
			{
				printf("%c nao existe\n", command[2]);
			}
			else
			{
				printf("%c existe\n", querry->key);
			}
		}
		else if(command[0] == 'P' && command[1] == 'R')		//mostra prefixa
		{	
			bool a = true;
			prefix(tree, &a);
			printf("\n");
		}
		else if(command[0] == 'P' && command[1] == 'O')		//mostra pósfixa
		{
			bool a = true;
			postfix(tree, &a);
			printf("\n");
		}
		else 		//mostrar infixa
		{	
			bool a = true;
			infix(tree, &a);
			printf("\n");
		}
	}
	free(tree);
	return 0;
}