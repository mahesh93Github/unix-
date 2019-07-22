#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include"header.h"
#define indx1 1
#define indx2 2
#define indx3 3

int main(int argc ,char *argv[])
{
	int fd1,fd2,index;
	fd1=open(argv[1],O_RDWR);
	struct Hole ptr;
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
	printf("1.check hole are present or not \n 2.check for one hole \n 3.check for more than 2 hole\n");
	scanf("%d",&index);
	switch(index)
	{
		case indx1:   
				findHole(fd1,fd2,&ptr);
				break;
		case indx2: checkForOne(fd1,fd2);
			break;
		case indx3: checkForMoreHole(fd1,fd2);
			break;
		default :
			break;


	}
	close(fd1);
	close(fd2);
	return 0;
}
