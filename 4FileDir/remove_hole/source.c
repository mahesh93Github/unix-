#include"header.h"
int findHole(int fd1,int fd2,struct Hole *ptr)
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



int checkForOne(int fd1,int fd2)
{
	char buff;
	int sCount=0,eCount=0,count=0,index=0;
	if(fd1 < 0 | fd2 < 0)
	{
		printf("ERROR : in checkForOne fun \n");
		return -1;
	}

	while(read(fd1,&buff,1)>0)
	{
		count ++;
		if(buff == 0)
		{
			index ++;
			if(index==1)
				sCount= count;

		}
		if(buff !=0)
		{
			if(sCount>0){
				eCount = count-1;
				break;
			}
		}

	}
	printf("start at %d ",sCount);
	printf("End at %d",eCount);
	return 0;
}
