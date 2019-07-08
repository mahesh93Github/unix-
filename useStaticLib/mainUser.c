#include<stdio.h>
#include"/home/maheshlinux/unix-/StaticLib/ArrayPro/headerFile.h"

int main(){
	printf("program to use all static library \n");
	int Num[]={10,20,30,40,50,50,60,70,80,90,100};
	int ans;
	printf("from static ArrayLib \n\n");
	ans= EvenNo(Num,10);
	printf("even number from array %d\n",ans);
	ans = Nigative(Num,10);
	printf("nigative no %d\n",ans);
	ans = DiffML(Num,10);
	printf("Diff between max and min %d\n",ans);
	ans = firstOcc(Num,10,20);
	printf("first occurance of no %d\n",ans);
	ans =lastOcc(Num,10,10);
	printf("last Occurance is %d\n",ans);


	return 0;
}
