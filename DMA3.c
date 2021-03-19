#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct st
	{
		char name[10];
		char roll[10];
	};

	struct st *ptr;

	ptr=(struct st *)malloc(2*sizeof(struct st));
        ptr=realloc(ptr,3*sizeof(struct st));
	for(int i=0;i<3;i++)
	{ 
		printf("Enter Student data s%d",i+1);
		scanf("%s",(ptr+i)->name);
		scanf("%s",(ptr+i)->roll);
	}
	for(int i=0;i<3;i++)
        {
                printf("printining  Student data s%d",i+1);
                printf("%s\n",(ptr+i)->name);
                printf("%s\n",(ptr+i)->roll);
        }

}
