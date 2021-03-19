#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct node 
	{
		char data;
		struct node *next;
	};

	struct node *head=(struct node *)malloc(sizeof(struct node));
	head->data='a';
	head->next=NULL;

	struct node *current=(struct node *)malloc(sizeof(struct node)) ;
	current->data='b';
	current->next=NULL;
	head->next=current;

	current=(struct node *)malloc(sizeof(struct node)) ;
        current->data='c';
        current->next=NULL;
        head->next->next=current;
	
	struct node *t1;
	t1=head;

	while(t1->data!='a')
		t1=t1->next;
	printf("%c\n",t1->data);

	struct node *new=(struct node *)malloc(sizeof(struct node)) ;
        new->data='d';
        new->next=t1->next;
	t1->next=new;

	

       




	struct node *t;
	t=head;
	printf("LL DATA\n");

	while(t!=NULL)
	{
		printf("%c\n",t->data);
		t=t->next;
	}



}
