#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<assert.h>
#include"header.h"
#define indx1 1
#define indx2 2
#define indx3 3
#define indx4 4

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
	printf("1.check for all  hole  \n2. check for all data\n 3.check for one hole \n 4.check for more than 2 hole\n");
	scanf("%d",&index);
	switch(index)
	{
		case indx1:   
			assert(findHole(fd1,fd2,&ptr)==0);
			//printf("only hole are present\n");
			break;
		case indx2:
			assert(findHole(fd1,fd2,&ptr)==1);
			//printf("only data are present\n");
			break;
		case indx3: assert(checkForOne(fd1,fd2)==1);
			    break;
		case indx4: assert(checkForMoreHole(fd1,fd2)>2);
			    break;
		default :
			    break;


	}
	close(fd1);
	close(fd2);
	return 0;
}
