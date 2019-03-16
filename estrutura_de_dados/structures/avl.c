#include <stdio.h>
#include <stdlib.h>

typedef int bool;
#define true 1
#define false 0

typedef struct node
{
	int key;
	int h;
	struct node *left;
	struct node *right;
}node;

int max(int a, int b)
{
	return((a > b) ? a : b);
}

int h(node *root)
{
	if(root == NULL) return 0;
	return root->h;
}

int balanceFactor(node *root)
{
	return (h(root->left)-h(root->right));
}

void update_h(node *root)
{
	root->h = max(h(root->left), h(root->right)+1);
}

node *rightRotation(node *root)
{
	node *beta = root->left->right;
	root->left->right = root;
	root = root->left;
	root->right->left = beta;
	
	update_h(root->right);
	update_h(root);

	return root;
}

node *leftRotation(node *root)
{
	node *beta = root->right->left;
	root->right->left = root;
	root = root->right;
	root->left->right = beta;

	update_h(root->left);
	update_h(root);
	
	return root;

	/*						// outra abordagem
	node *b = root->left;
	root->right = b->left;
	b->left = root;
	update_h(root);
	update_h(b);
	return root;
	*/
}

node *insert(struct node *root, int key) 
{ 
    if (root == NULL)
    {
    	root = (node *)malloc(sizeof(node)); 
    	root->key = key; 
    	root->left = root->right = NULL;
    } 
    if (key < root->key) root->left = insert(root->left, key); 
    else if (key > root->key) root->right = insert(root->right, key);    
  	
  	update_h(root);
  	int balance = balanceFactor(root);
    if(balance == 2)
    {
    	if(balanceFactor(root->left) < 0) root->left = leftRotation(root->left);
    	root = rightRotation(root);
    }
    else if(balance == -2)
    {
    	if(balanceFactor(root->right) > 0) root->right = rightRotation(root->right);
    	root = leftRotation(root);
    }

    return root;
}   

node *search(struct node *root, int key) 
{ 
	if(root == NULL || root->key == key) return root;
	else if(key < root->key) search(root->left, key);
	else search(root->right, key);
}


void prefix(node *root, FILE *f)
{
	if(root == NULL) return;
	static int count=0;

	if(root->left == NULL)
	{
		fprintf(f, "null%d [shape = point];\n", ++count);
		fprintf(f, "%d -> null%d;\n", root->key, count);
	}
	else
	{
		fprintf(f, "%d -> %d;\n", root->key, root->left->key);
	}

	if(root->right == NULL)
	{
		fprintf(f, "null%d [shape = point];\n", ++count);
		fprintf(f, "%d -> null%d;\n", root->key, count);
	}
	else
	{
		fprintf(f, "%d -> %d;\n", root->key, root->right->key);
	}
	prefix(root->left, f);
	prefix(root->right, f);
}

node *maxValue(struct node* root)	//passar root->left como parametro na hr de remover
{ 
	while(root->right != NULL) root = root->right;
  
    return root; 
}

node *minValue(node *root)	//passar root->right como parametro na hr de remover
{
	while(root->left != NULL) root = root->left;

	return root;
}

//arrumar o tamanho da arvore depois da remoçao
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

    if(root == NULL) return root; 
 	
 	//arrumar tamanho 
  	update_h(root); 
    int balance = balanceFactor(root); 

    //left left 
    if(balance > 1 && balanceFactor(root->left) >= 0) return rightRotation(root); 
  
    //left right 
    if(balance > 1 && balanceFactor(root->left) < 0) 
    { 
        root->left =  leftRotation(root->left); 
        return rightRotation(root); 
    } 
  
    //right right 
    if(balance < -1 && balanceFactor(root->right) <= 0) return leftRotation(root); 
  
    //right left 
    if(balance < -1 && balanceFactor(root->right) > 0) 
    { 
        root->right = rightRotation(root->right); 
        return leftRotation(root); 
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
	node *tree = NULL;
	char command[20];
	int s = 20;

	while(fgets(command,s,stdin) != NULL)
	{
		if(command[0] == 'I' && command[1] == ' ')		//inserção
		{
			tree = insert(tree, atoi(&command[2]));	
		}
		else if(command[0] == 'R')							//remoçao
		{
			tree = deleteNode(tree, atoi(&command[2]));
		}
	}
	
	FILE *file = fopen("avl.gv", "w");
	fprintf(file, "digraph AVL {\n");
	prefix(tree, file);
	fprintf(file, "}\n");
	fclose(file);

	clearTree(tree);
	return 0;
}