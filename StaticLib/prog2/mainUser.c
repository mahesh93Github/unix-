#include<stdio.h>
#include"staticLib.h"
int main(){
	printf("in main function\n");
	int c;
	c = add(10,20);
	printf("addition of 2 no is %d",c);
	return 0;
}
