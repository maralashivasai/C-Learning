#include<stdio.h>
int main()
{
	char  s[]="hello";
	int i=0;
	while(s[i])
	{
		printf("%c  %c  %c  %c\n",s[i],i[s],*(i+s),*(s+i));
		i++;
	}

	char * st;
	st=s;
	i=0;
	while(s[i]!='\0')
	{
		printf("%c\n",s[i]);
		i++;
	}

}
