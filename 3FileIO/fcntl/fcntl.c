#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
int main(int argc,char *argv[]){

	int fd1,fd2,fd3;
	int w1fd,w2fd;
	char buff[10];
	fd1=open(argv[1],O_RDWR);
	if(fd1 == -1)
	{
		printf("file is not open \n");
		return 0;

	}
	w1fd=read(fd1,buff,10);
	printf("read from fd1=%d\n",w1fd);
	write(0,buff,sizeof(buff));
	fd2 = fcntl(fd1,F_DUPFD,2);
//	buff[10]='';
	if(fd2==-1)
	{
		printf("Error in fcntl\n");
		return 0;

	}
	printf("fd2 is %d\n",fd2);
	w2fd=read(fd2,buff,10);
	printf("read from fd2=%d\n",w2fd);
	write(0,buff,sizeof(buff));


	return 0;
}
