#include<stdio.h>
int main()
{
	struct f
	{
		char c;
		short s;
		
		int n;
		double d;
                 

	}f1;

	union g
	{
                char c;
		short s;
		
		int n;
		double d;


	}d1;

         d1.c='a';
	printf("size of struct %d\n",(int)sizeof(struct f));
        printf("character %c\n",d1.c);     
        printf("character %d\n",d1.c);	
        printf("character %d\n",d1.n);	
         printf("size of union  %d\n",(int)sizeof(union g));
      printf("Add c %p\n",&f1.c);
      printf("add s  %p\n",&f1.s);
      printf("add d %p \n",&f1.d);
      printf("add n %p \n",&f1.n);

	 


}
