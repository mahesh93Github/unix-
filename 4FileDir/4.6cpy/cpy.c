#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(int argc,char * argv[])
{
	int fd1,fd2,fdr;
	char buff;
	int count =0,flag=0,sCount,eCount;
	fd1=open(argv[1],O_RDWR);
	if(fd1<0)
	{
		printf("ERROR : in file opening\n");
		return 0;
	}

	fd2 = open(argv[2],O_RDWR|O_APPEND|O_CREAT);
	if(fd2<0)
	{
		printf("ERROR : in file 2 opening\n");
		return 0;
	}
	while((fdr=read(fd1,&buff,1))>0)	
	{      count ++;
		if(buff == 0)
		{
			if(flag == 1 | count ==1)
			{
				sCount  = count;
				printf("hole start at %d\t",sCount);
			}

			flag =0;
		}
		else if(buff != 0){
			if(flag==0|count ==1)
			{
				eCount = count;
				if(eCount!=1)
					printf("end at %d\n",eCount-1);
			}

			flag = 1;	
			write(fd2,&buff,fdr);
		}
	}
if(buff ==EOF || flag == 0)
{

printf("end at %d\n",count -1);
}
	return 0;
}
