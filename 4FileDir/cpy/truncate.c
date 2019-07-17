#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int len = atoi(argv[2]);
	if(truncate(argv[1],len)<0)
	{

		printf("error in truncate \n");
		return 0;
	}
	printf("Done\n");
	return 0;
}
