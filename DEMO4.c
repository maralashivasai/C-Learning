#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int*  strlens(char []);
int main()
{

	char s[]="apple";
	char *p="apple";
	printf("%s\n",s);
	printf("%s\n",p);
     
printf(" inside main %u\n",strlens(s));
    


		 
	 


	
}

int * strlens(char  d[])
{
int *n=(int *)malloc(sizeof(int));
 
printf("enter n value");
  scanf("%d",n);
int *n1=(int *)malloc(sizeof(int));
printf("n PREV %d\n",n);
   n=n1;
printf("%d\n",n);
*n=12;

   printf("inside function %u\n",n);

printf("N value is %d\n",*n);

return n;

	
}



              

