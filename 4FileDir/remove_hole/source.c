#include"header.h"
int findHole(int fd1,int fd2,struct Hole *ptr)
{
	char buff;
	int count=0,flag = 0;
	if(fd1 < 0 | fd2 < 0)
	{
		printf("Error: in noHole function\n");
		return -1;
	}

	while(read(fd1,&buff,1)>0)
	{ 
		if(buff !=0)
		{ flag = 1;
			write(fd2,&buff,sizeof(buff));

		}
		else if(buff == 0)
		{
			count =1;
		}
	}
	if(count ==1 && flag ==0 )
	{
		printf("there is only hole in file\n");
	}else if(count == 0 && flag ==1){
		printf("there is only data in file\n");
	}
	printf("successfull\n");
	return 0;
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
			write(fd2,&buff,sizeof(buff));
			if(sCount>0 && eCount<=0){
				eCount = count-1;
			}
		}

	}
	printf("start at %d ",sCount);
	printf("End at %d",eCount);
	return 0;
}

int checkForMoreHole(int fd1,int fd2)
{
	int sCount=0,eCount= 0,count=0;
	char buff;
	if(fd1<0 || fd2<0)
	{
		printf("ERROR : in checkForMoreHole fd \n");
		return -1;
	}

	while(read(fd1,&buff,1)>0)
	{	count ++;
		if(buff == 0)
		{
			if(sCount == 0 && buff == 0)
			{
				sCount = count;
				printf("Start of hole from %d\t",sCount);
			}

		}

		if(buff !=0)
		{ //printf("more buff %c",buff);
			write(fd2,&buff,sizeof(buff));
			if(sCount!=0 && buff !=0)
			{
				eCount = count-1;
				printf("end of Hole %d\n",eCount);
				sCount = eCount= 0;
			}

		}
	}
	if(sCount>0 && eCount == 0)
	{
		printf("end of Hole %d\n",count);

	}
	return 0;
}
