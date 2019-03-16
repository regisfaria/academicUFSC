#include <stdio.h>
#include <stdlib.h>

typedef int bool;
#define true 1
#define false 0

typedef struct node
{
	int key;
	struct node *left;
	struct node *right;
}node;

node *newNode(int key) 
{ 
    node *tmp = (node *)malloc(sizeof(node)); 
    tmp->key = key; 
    tmp->left = tmp->right = NULL;
    return tmp; 
} 

node *search(struct node *root, int key) 
{ 
	if(root == NULL || root->key == key) return root;
	else if(key < root->key) search(root->left, key);
	else search(root->right, key);
}

node *insert(struct node *root, int key) 
{ 
    if (root == NULL) return newNode(key); 
    if (key < root->key) root->left = insert(root->left, key); 
    else if (key > root->key) root->right = insert(root->right, key);    
  
    return root;
}  

void prefix(node *root, bool *p)
{
	if(root != NULL)
	{
		if(*p)
		{
			printf("%d", root->key);
			*p = false;	
		}
		else
		{
			printf(" %d", root->key);
		}
		prefix(root->left, p);
		prefix(root->right, p);
	}
}

void postfix(node *root, bool *p)
{
	if(root != NULL)
	{
		postfix(root->left, p);
		postfix(root->right, p);
		if(*p)
		{
			printf("%d", root->key);
			*p = false;	
		}
		else
		{
			printf(" %d", root->key);
		}
	}
}

void infix(node *root, bool *p)
{
	if(root != NULL)
	{
		infix(root->left, p);
		if(*p)
		{
			printf("%d", root->key);
			*p = false;	
		}
		else
		{
			printf(" %d", root->key);
		}
		infix(root->right, p);
	}
}

node *maxValue(struct node* root) 
{ 
	while(root->right != NULL) root = root->right;
  
    return root; 
}

node *deleteNode(struct node* root, int key) 
{ 
	if (root == NULL) return root; 
  	
  	else if(key < root->key) root->left = deleteNode(root->left, key);		//valor a remover está a esquerda
  	else if(key > root->key) root->right = deleteNode(root->right, key);	//valor a remover está a direita
    else 																	//chave é igual ao nodo atual, ou seja, remover este  nodo
    {
    	//Caso 1 -> no child
    	if(root->left == NULL && root->right == NULL)
    	{
    		free(root);
    		root = NULL;
    	}
    	//Caso 2 -> 1 child
    	else if(root->left == NULL)
    	{
    		node *tmp = root;
    		root = root->right;
    		free(tmp);
    	}
    	else if(root->right == NULL)
    	{
    		node *tmp = root;
    		root = root->left;
    		free(tmp);
    	}
    	//Caso 3 -> 2 children
    	else
    	{
    		node *tmp = maxValue(root->left);
    		root->key = tmp->key;
    		root->left = deleteNode(root->left, tmp->key);
    	}
    }
    return root;
}

void clearTree(node *root)
{
	if(root == NULL) return;
	clearTree(root->left);
	clearTree(root->right);
	free(root);
} 

int main(int argc, char **argv)
{
	char command[20];
	node *tree = NULL;
	int s = 20;

	while(fgets(command,s,stdin) != NULL)
	{
		if(command[0] == 'I' && command[1] == ' ')		//inserção
		{
			tree = insert(tree, atoi(&command[2]));	
		}
		else if(command[0] == 'P' && command[1] == ' ')		//busca
		{
			node *querry = search(tree, atoi(&command[2]));
			if(querry == NULL)
			{
				printf("%d nao existe\n", atoi(&command[2]));
			}
			else
			{
				printf("%d existe\n", querry->key);
			}
		}
		else if(command[0] == 'R')							//remoçao
		{
			tree = deleteNode(tree, atoi(&command[2]));
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
		else 												//mostrar infixa
		{	
			bool a = true;
			infix(tree, &a);
			printf("\n");
		}
	}
	clearTree(tree);
	return 0;
}