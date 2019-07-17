#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(int argc,char * argv[])
{
	int fd1,fd2,fdr;
	char buff;
	fd1=open(argv[1],O_RDWR);
	if(fd1<0)
	{
		printf("ERROR : in file opening\n");
		return 0;
	}

	fd2 = open(argv[2],O_RDWR|O_APPEND);
	if(fd2<0)
	{
		printf("ERROR : in file 2 opening\n");
		return 0;
	}
	while((fdr=read(fd1,&buff,1))>0)	
	{
		//printf("%d   %c ----\n",buff,buff);
		if(buff != 0){
			write(fd2,&buff,fdr);
		}
	}

	return 0;
}
