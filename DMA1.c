#include<stdio.h>
#include<stdlib.h>
int main()
{
 int *ptr=(int *)malloc(sizeof(int));
 

 scanf("%d",ptr);
*ptr=56;
 
 
 printf("%d",*ptr);

}
