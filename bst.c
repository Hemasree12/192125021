#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node{
	int data;
	struct node*left,*right;
}*root=NULL,*newnode;
struct node* create(struct node *root,int val)
{
	if(root==NULL)
	{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->left=NULL;
	newnode->right=NULL;
	return(newnode);
}
else if(val<root->data){
root->left=create(root->left,val);
}
else if(val>root->data){
root->right=create(root->right,val);
return(root);
}
}
void inorder(struct node*root)
{
	if(root!=NULL)
	{
	inorder(root->left);
	printf("%d",root->data);
	inorder(root->right);
}
}
void preorder(struct node*root){
	if(root!=NULL)
	{
	printf("%d",root->data);
	preorder(root->left);
	preorder(root->right);
}
}
void postorder(struct node*root){
	if(root!=NULL)
	{
	preorder(root->left);
	preorder(root->right);
	printf("%d",root->data);
}
}

void main(){
	int ch,val;
	do{
	printf("\nMain menu:");
	printf("\n1.create\n2.inorder\n3.preorder\n4.postorder\n5.Exit\n");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		printf("enter the value:");
		scanf("%d",&val);
		root=create(root,val);
		break;
		case 2: 
		inorder(root); 
		break;
  		case 3:
		  preorder(root);
		  break;
  		case 4:
		  postorder(root);
		  break;
		case 5:
		exit(0); 
		default:
		 printf("\nInvalid Input");
	}
	}while(ch>0 && ch<=5);
}
