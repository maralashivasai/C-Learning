#include<stdio.h>
int main()
{

	
	int **ip;
	int *ip1;
         int n=45;
	 ip1=&n;
	 ip=&ip1;


	printf(" value %d\n",**(ip+1));


}
