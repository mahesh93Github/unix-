#include<stdio.h>
#include"headerfile.h"

int main(){
	printf("finding number with sharedLibrary\n");
	int ans,len,i;
	printf("enter no to be insert\n");
	scanf("%d",&len);
	int num[len];
	for(i=0;i<len;i++){
		scanf("%d",&num[i]);
	}
	ans=maximum(num,len);
	printf("%d are maximum no\n",ans);
	ans=minimum(num,len);
	printf("%d are minimum no \n",ans);
	return 0;
}
