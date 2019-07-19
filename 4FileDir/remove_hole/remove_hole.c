#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include"header.h"
#define indx1 1
#define indx2 2
#define indx3 3
/*struct startEnd
{
int start;
int end;
};*/

int main(int argc ,char *argv[])
{
	int fd1,fd2,index;
	fd1=open(argv[1],O_RDWR);
	struct startEnd ptr;
	if(fd1<0)
	{
		printf("ERROR : in file openning\n");
		return -1;
	}

	fd2= open(argv[2],O_RDWR);
	if(fd2<0)
	{
		printf("ERROR : in 2file openning\n");
		return -1;
	}

	printf("enter your choice \n");
	printf("1.Remove hole from beginning\n 2.Remove hole from middel \n 3.Remove hole from last\n");
	scanf("%d",&index);
	switch(index)
	{
		case indx1:   
				removeFromBeginning(fd1,fd2,&ptr);
				printf("after remove fun\n");
				break;
		case indx2:
			break;
		case indx3:
			break;
		default :
			break;


	}
	close(fd1);
	close(fd2);
	return 0;
}
