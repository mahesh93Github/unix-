#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
#define val1 1
#define val2 2
#define val3 3
int main(int argc ,char *argv[])
{
	int fd1,index;
	char buff[]={'1','2','3','4','5','6','7','8','9','0'};
	int flag = 1;
	fd1=creat(argv[1],0777);
	if(fd1<0)
	{
		printf("ERROR : in file creation \n");
		return -1;
	}
	while(flag)
	{
		printf("1.create hole \t 2.create data 3.exit\n");
		scanf("%d",&index);
		switch(index)
		{
			case val1 :
				lseek(fd1,10,SEEK_CUR);
				break;
			case val2 :
				write(fd1,buff,sizeof(buff));
				break;
			case val3 : flag = 0;
				 break;
			default : 
				 printf("invalid choice\n");
				 break;
		}
	}

	return 0;
}
