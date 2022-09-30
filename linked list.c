#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
}*head=NULL,*p,*t,*newnode;
void create()
{
	int x,i,n;
	printf("enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("enter the valus:");
	scanf("%d",&x);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		p=newnode;
	}
	else{
		for(p=head;p->next!=NULL;p=p->next);
		p->next=newnode;
		p=newnode;
	}
}
}
	void display()
	{
		if(head==NULL)
			printf("linked list is empty:");
		else
			for(p=head;p!=NULL;p=p->next)
				printf("%d ->",p->data);
	}
	void insert_at_begin(){
		int x;
		printf("enter the value:");
		scanf("%d",&x);
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=x;
		newnode->next=NULL;
		p=head;
		head=newnode;
		newnode->next=p;
		p=newnode;
	}
	void insert_at_end(){
		int x;
		printf("enter the value:");
		scanf("%d",&x);
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=x;
		newnode->next=NULL;
	    for(p=head;p->next!=NULL;p=p->next);
	    {
		p->next=newnode;
		p=newnode;
	}
	}
	void insert_at_any_pos(){
		printf("enter the value and position");
		int i,x,pos;
		scanf("%d%d",&x,&pos);
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=x;
		newnode->next=NULL;
		for(p=head,i=1;i<pos;p=p->next,i++)
		t=p;
		t->next=newnode;
		newnode->next=p;
		p=newnode;
	}
	void dele_at_begin(){
		int x;
		p=head;
		head=p->next;
		x=p->data;
		free(p);
		printf("the deleted element is %d",x);
	}
	void dele_at_end(){
		int x;
		for(p=head;p->next!=NULL;p=p->next)
		t=p;
		t->next=NULL;
		x=p->data;
		free(p);
		printf("deleted element is %d",x);
	}
	void dele_at_any_pos(){
		int x,pos,i;
		printf("enter the position:");
		scanf("%d",&pos);
		for(i=1,p=head;i<pos,i++;p=p->next)
		t=p;
		t->next=p->next;
		x=p->data;
		free(p);
		printf("enter the deleted element is %d",x);
	}

int main(){
	int ch;
	do{
	printf("\nMain menu:");
	printf("\n1.create\n2.display\n3.insert_at_begin\n4.insert_at_end\n5.insert_at_any_pos\n6.dele_at_begin\n7.dele_at_end\n8.dele_at_any_pos\n9.Exit\n");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: create();break;
		case 2: display(); break;
  		case 3:insert_at_begin();break;
  		case 4:insert_at_end();break;
		case 5:insert_at_any_pos();break;
		case 6:dele_at_begin();break;
		case 7:dele_at_end();break;
		case 8:dele_at_any_pos();break;
		case 9:exit(0); 
		default: printf("\nInvalid Input");
	}
	}while(ch>0 && ch<=9);
	return 0;
}
