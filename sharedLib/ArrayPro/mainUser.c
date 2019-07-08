#include<stdio.h>
#include<stdlib.h>
#include"headerFile.h"

int main()
{
	int No,i,index,ans;
	printf("Arrray program by using SharedLib\n\n");
	printf("enter no of elements\n");
	scanf("%d",&No);
	int Num[No];
	printf("Enter Val\n");
	for(i=0;i<No;i++)
	{
		scanf("%d",&Num[i]);
	}

	printf("enter Choic\n");
	printf("1.find max 2.find min 3.find diff max min 4.find count of number 5.find first Even\n");

	scanf("%d",&index);
	switch(index){
		case 1 : ans = returnMax(Num ,No);
			 printf("max no is %d\n",ans);
			 break;
		case 2 :ans = returnmin(Num ,No);
			printf("min no is %d\n",ans);
			break;
		case 3 :ans = returnDiffML(Num,No);
			printf("diff between max and min %d\n",ans);
			break;
		case 4 :printf("enter no to search\n");
			int n;
			scanf("%d",&n);
			ans =returnCountNo(Num,No,n);
			printf("count is %d\n",ans);
			break;
		case 5 :ans= returnFirstEven(Num,No);
			printf("first Even no is %d\n",ans);
			break;
		default :printf("invalid argument\n");
			 exit(0);

	}
	return 0;
}
