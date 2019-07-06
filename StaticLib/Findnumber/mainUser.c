#include<stdio.h>
#include"headreFile.h"
int main(){
	printf("find number static lib program\n ");
	int num[10];
	int i=0,c,len;
	printf("enter number to find\n");
	scanf("%d",&len);
		for(i=0;i<len;i++){
			scanf("%d",&num[i]);
		}
	c=maximum(num,len);
	printf("maximum number from 10 number are %d\n",c);
	c=minimum(num,len);
	printf("minimum from 10 number are %d\n",c);
	return 0;

}
