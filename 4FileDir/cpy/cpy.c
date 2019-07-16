#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(int argc,char * argv[])
{
	int fd1,fd2,fdr;
	char buff[25];
	fd1=open(argv[1],O_RDWR);
	if(fd1<0)
	{
		printf("ERROR : in file opening\n");
		return 0;
	}

	fd2 = open(argv[2],O_RDWR);
	if(fd2<0)
	{
		printf("ERROR : in file 2 opening\n");
		return 0;
	}
while(fdr=read(fd1,buff,25)<0)
{
write(fd2,buff,fdr);

}

	return 0;
}
