#include<stdio.h>
#include"/home/maheshlinux/unix-/sharedLib/ArrayPro/headerFile.h"
#include"/home/maheshlinux/unix-/sharedLib/Findnumber/headerfile.h"
#include"/home/maheshlinux/unix-/sharedLib/numberPro/headerFile.h"

//#include"/home/maheshlinux/unix-/sharedLib/Findnumber/headerfile.h"

int main()
{
	int ans;
	printf("user numberPro Library from other folder\n\n");
	ans =maxtwo(10,50);
	printf("max no from 10 50 two are %d\n",ans);
	ans =mintwo(7,5);
	printf("min number from 7 5 are %d\n",ans);
	ans = maxthree(1,4,70);
	printf("max from 1 ,4 , 70 are %d \n",ans);
	ans = minthree(2,3,4);
	printf("min from 2 3 4 are %d\n",ans);
	printf("\n\n\n");
	printf("from Findnumber function\n");
	int arrNum[]={1,2,3,4,5,6,7,8,9,10};
	ans= maximum(arrNum,10);
	printf("maximum from array %d\n",ans);
	ans = minimum(arrNum, 10);
	printf("minimum from arrray%d\n",ans);
	printf("\n\n\n");
	printf("from ArrayLib function \n");
	ans = returnMax(arrNum,10);
	printf("return max %d\n",ans);
	ans = returnmin(arrNum,10);
	printf("return min %d\n",ans);
	ans = returnDiffML(arrNum ,10);
	printf("return diff from max and min %d\n",ans);
	ans =returnCountNo(arrNum,10,10);
	printf("return count %d\n",ans);
	ans = returnFirstEven(arrNum,10);
	printf("return first even %d\n",ans);

	return 0;
}
