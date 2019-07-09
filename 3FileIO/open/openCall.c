#include<stdio.h>
#include<fcntl.h>


int main(int argc,char *argv[])
{
	int fd;
	//fd =open(argv[1],O_RDONLY);
	//printf("file is open at %d  fd\n",fd);
	//fd =open(argv[1],O_APPEND);
	//printf("open file in append mode and fd is %d\n",fd);
	fd=open(argv[1],O_CREAT);
	printf("create file if not present fd is %d\n",fd);


	return 0;
}
