#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *right,*left;
};
void print(struct node* node)
{
	if (node == NULL)
		return;
     	printf("%d ", node->data);  
     	print(node->left);  
     	print(node->right);
} 
struct node *newnode(int data)
{
	struct node *node=malloc(sizeof(struct node));
	node->data=data;
	node->right=NULL;
	node->left=NULL;
	return(node);
}
struct node* insert(struct node* root,int value)
{
	if(root==NULL)
	{
		
		root=newnode(value);
	}
	else if(root->data > value)
		root->left=insert(root->left,value);
	else
		root->right=insert(root->right,value);
	return root;
}
void search(struct node* root,int z)
{
	if(root==NULL)
		printf("Not found");
	else if(root->data==z)
		printf("found");
	else if(root->data > z)
		search(root->left,z);
	else
		search(root->right,z);
	return;
}

int main()
{
	struct node* root=NULL;
	int n,i,x,z;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
	
		root=insert(root,x);
	}
	print(root);
	printf("search the element\n");
	scanf("%d",&z);
	search(root,z);
	
	
}