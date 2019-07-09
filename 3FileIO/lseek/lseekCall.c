#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(int argc ,char *argv[])
{
	int fd,lsfd;
	fd= open(argv[1],O_RDWR);
	if(fd==-1){
		printf("can not open file \n");
		return 0;
	}

	//lsfd= lseek(fd,0,SEEK_CUR);
	//lsfd= lseek(fd,0,SEEK_END);
	lsfd= lseek(fd,0,SEEK_SET);
	printf("after lseek call offset  is %d\n",lsfd);	
	return 0;


}
