#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr=(int *)malloc(2*sizeof(int));
	for(int i=0;i<2;i++)
	{
		scanf("%d",ptr+i);
	}

    ptr=realloc(ptr,1*sizeof(int));

//	printf("uwkecwe tw o more");
//	for(int i=2;i<4;i++)
//		scanf("%d",ptr+i);
      
          ptr++;	
//	for(int i=0;i<1;i++)
		printf("%d",*ptr);
}
