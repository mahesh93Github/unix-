#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(int argc ,char* argv[])
{
	int fd1,fd2;
	int readOff,writeOff;
	char buff[10];
	fd1 = open(argv[1],O_RDWR);
	fd2=open(argv[2],O_RDWR|O_APPEND);
	if(fd1<0 && fd2<0){
		printf("file opening error\n");
		return 0;
	}

	readOff=read(fd1,buff,10);
	if(readOff>0)
	{
		writeOff=write(fd2,buff,sizeof(buff));
		printf("data is write %d byte\n",writeOff);

	}

return 0;

}
