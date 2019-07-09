//write your own dup2 function ,without calling fcntl function 

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int fdcpy(int fd1,int fd2)
{
	printf("fd1 fd2 %d %d \n",fd1,fd2);
	close(fd2);
	printf("closing fd \n");
	return 0;
}
int main(int argc,char * argv[])
{
	printf("dup program\n\n");
	int fd,fd2,fdNo;
	fd = open(argv[1],O_RDWR);
	if(fd==-1)
	{
		printf("ERROR in file openning\n");
		return 0;
	}
	printf("enter fd no you want:\n");
	scanf("%d",&fdNo);
	fd2=fdcpy(fd,fdNo);
	printf("duplicate fd is %d\n",fd2);

	return 0;
}
