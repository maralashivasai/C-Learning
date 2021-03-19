#include<stdio.h>
#include<stdlib.h>
int main()
{
int i;

int *p;
p=(int *)calloc(10,sizeof(int));

p=realloc(p,12);
printf("enter 10 elemets ");
for(i=0;i<12;i++)
{
scanf("%d",p+i);

}



for(i=0;i<12;i++)
{
printf("%d\n",p[i]);
}
}
