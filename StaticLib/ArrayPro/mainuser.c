#include<stdio.h>
#include"headerFile.h"
#include<stdlib.h>
int main(){
	int no,i,index,OccNo,c;
	printf("array program using StaticLib \n");
	printf("Enter no  to be inserted\n");
	scanf("%d",&no);
	printf("enter value :");
	int num[no];
	for(i=0;i<no;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("Enter you choice:\n 1.find EvenNo\n  2. find nigative No\n 3.find Diff from min And max\n 4.find first Occurance\n 5.find last occurance\n 6.find No occurance\n");
	scanf("%d",&index);
	switch(index)
	{
		case 1: c= EvenNo(num,no);
		       printf("ans is %d \n",c); 
		       break;
		case 2:  c= Nigative(num,no);
			printf("ans is %d\n",c);
			break;
		case 3: c= DiffML(num,no);
		       printf("ans is %d\n",c);
		       break;
		case 4: printf("enter no to get occurance\n");
			scanf("%d",&OccNo);
			 c=firstOcc(num ,no,OccNo);
			printf("ans is %d\n",c);
			break;

		case 5: printf("enter no to get occurance\n");
			scanf("%d",&OccNo);
			 c =lastOcc(num ,no,OccNo);
			printf("ans is %d\n",c);
			break;
		case 6: printf("enter no to get occurance\n");
			scanf("%d",&OccNo);
			 c =NoOccurance(num ,no,OccNo);
			printf("ans is %d\n",c);
			break;
		default : printf("invalid Argument\n");
			  exit(0);




	}
	return 0;
}
