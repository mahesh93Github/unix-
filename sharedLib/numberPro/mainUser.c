#include<stdio.h>
#include"headerFile.h"

int main(){
	printf("number frogram of shared library\n");
	int c;
	c= maxtwo(10,20);
	printf("max number from 2 :%d ",c);
	c= mintwo(10,5);
	printf("mini from 2 num : %d ",c);
	c=maxthree(10,5,75);
	printf("max from 3 num :%d",c);
	c= minthree(2,5,0);
	printf("min from 3 :%d",c);
	return 0;

}
