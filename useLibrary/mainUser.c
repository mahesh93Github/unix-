#include<stdio.h>

#include"/home/maheshlinux/unix-/sharedLib/Findnumber/headerfile.h"
#include"/home/maheshlinux/unix-/sharedLib/numberPro/headerFile.h"

//#include"/home/maheshlinux/unix-/sharedLib/Findnumber/headerfile.h"

int main()
{
	int ans;
	    printf("user Library from other folder\n");
	ans =maxtwo(10,50);
	printf("max no from 10 50 two are %d\n",ans);
	ans =mintwo(7,5);
	printf("min number from 7 5 are %d\n",ans);
	ans = maxthree(1,4,70);
	printf("max from 1 ,4 , 70 are %d \n",ans);
	ans = minthree(2,3,4);
	printf("min from 2 3 4 are %d\n",ans);

	printf("using static array call  shared library\n");
	int arrNum[]={1,2,3,4,5,6,7,8,9,10};
	ans= maximum(arrNum,10);
	printf("maximum from array %d\n",ans);
	ans = minimum(arrNum, 10);
	printf("minimum from arrray%d\n",ans);
	
	return 0;
}
