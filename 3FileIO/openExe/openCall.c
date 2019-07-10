#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
int main(int argc ,char *argv[])
{

	int fd,rfd;
	char buff[20];
	fd = open(argv[1],O_RDWR|O_APPEND);
	if(fd<0)
	{
		printf("file openning error \n");
		return 0;
	}
	lseek(fd,1,SEEK_SET);
	//rfd=read(fd ,buff, 20);
	rfd =write(fd,"sssssssssss",10);
	if(rfd==-1)
	{
		printf("Error in reading file \n");
		return 0;
	}
	printf("read data are %s\n",buff);
	return 0;

}
