#include<stdio.h>
int main(){
	int display();
	int (*funptr)();
       
	funptr=display;

	(*funptr)();
	funptr();



}

     int display()
      {
	      printf("hello world \n");

	}


