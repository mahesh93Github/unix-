#include<stdio.h>
#include"staticLib.h"
int main(){
	printf("in main function\n");
	int c;
	c = add(10,20);
	printf("addition of 2 no is %d",c);
	c= multi(10,20);
	printf("multiplication  is %d",c);
	c=div(10,5);
	printf("divsion is %d",c);
	c=sub(5,10);
	printf("substraction is %d",c);
	return 0;
}
