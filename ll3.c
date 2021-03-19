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


struct node *current=(struct node*)malloc(sizeof(struct node));
current->data='b';
current->next=NULL;
head->next=current;

current=(struct node *)malloc(sizeof(struct node));
current->data='c';
current->next=NULL;
head->next->next=current;

current=(struct node *)malloc(sizeof(struct node));
  current->data='d';
  current->next=NULL;
  head->next->next->next=current;

struct node *t;
t=head;
while(t->next->next!=NULL)
{
t=t->next;
printf("%c\n",t->data);
}




struct node *d;
d=t->next;
t->next=NULL;
free(d);




struct node * t2;
t2=head;
printf("printing LL\n");
while(t2){
printf("%c\n",t2->data);
t2=t2->next;
}



}
