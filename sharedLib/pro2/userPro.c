#include<stdio.h>
#include"shared.h"

int main(){
	int c;
	printf("in main fun\n");
	c=add(50,50);
	printf("addition is %d",c);
	c = sub(50,50);
	printf("substraction is %d",c);
	c=mult(20,10);
	printf("multiplecation is %d ",c);
	c=div(10,5);
	printf("divison is %d",c);
	return 0;
}
