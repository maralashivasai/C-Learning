#include<stdio.h>
int main()
{
	struct df
	{
		int n;
		char s;
		float g;
		int k;
		short g1;
		double as;


	}d1;

	printf("%d\n",(int)sizeof(struct df));
	printf("%p\n",&d1.n);
	int w=&d1.n;
	printf("%d\n",w);
}



