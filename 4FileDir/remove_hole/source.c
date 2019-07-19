#include"header.h"
int noHole(int fd1,int fd2,struct Hole *ptr)
{
	char buff;
	int count=0;
	if(fd1 < 0 | fd2 < 0)
	{
		printf("Error: in noHole function\n");
		return -1;
	}

	while(read(fd1,&buff,1)>0)
	{ 
		if(buff !=0)
		{
			write(fd2,&buff,sizeof(buff));

		}
		else if(buff == 0)
		{
			count =1;
		}
	}
	if(count ==1)
	{
		printf("there is hole in file\n");
	}else{
		printf("there is no hole in file\n");
	}
}
