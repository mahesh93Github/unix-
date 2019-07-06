#include<stdio.h>
#include"headerFile.h"
int main(){
	printf("all number program using static library\n");
	int c;
	c=maxtwo(10,20);
	printf("max of two no is %d\n ",c);
	c = minitwo(10,20);
	printf("mini of two no is %d\n",c);
	c = maxthree(10,5,85);
	printf("max no from 3 no are %d\n ",c);
	c = minithree(1,0,70);
	printf("min from 3 no are %d\n",c);
	return 0;
}
