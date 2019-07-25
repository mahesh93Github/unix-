#include<stdio.h>
struct start 
{
	int start;
	int end;
};

void fun(struct start *ptr,int len)
{int i=0;
	for(i=0;i<5;i++)
	{
		ptr[i].start= i;
		ptr[i].end = i+1;
	}

}
int main()
{
	int i=0;
	struct start s1[5];

	fun(s1,5);
	printf("after fun() \n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",i);
		printf("start =%d\t end=%d\n",s1[i].start,s1[i].end);

	}
	return 0;
}
