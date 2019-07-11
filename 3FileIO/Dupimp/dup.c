//write your own dup2 function ,without calling fcntl function 

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

// this function take dup2 like argument

int fdcpy(int fd1,int fd2)
{
	if(fd1==fd2)
	{
		return fd2;
	}

	close(fd2);//close chosen fd if it is open 
	int arr[fd2];  //array to collect fd in init
	int i=0,j=0;
	for(i=0;i<fd2;i++)
	{
		arr[i]=dup(fd1);
		if(arr[i]==fd2)
		{   j=i;
			break;
		}

	}
	while(j>0)
	{
		if(arr[j]!=fd2)
		{
			close(arr[j]);
		}
		j--;
	}
	return fd2;

}
/*int cpy(int fd1,int flag,char *ptr)
{
	int fd;
printf("string are %s",ptr);
	fd=openat(fd,ptr,flag);
	printf("success full new fd is %d old fd is %d",fd,fd1);

}*/
int main(int argc,char * argv[])
{      
	char buff[7];
	printf("dup program\n");
	int fd,fd2,fdNo,roffset,flag = 2;	
	fd = open(argv[1],flag);
	printf("new fd %d\n",fd);
	if(fd==-1)
	{
		printf("ERROR in file openning\n");
		return 0;
	}
	printf("enter fd no you want:\n");
	scanf("%d",&fdNo);
	fd2=fdcpy(fd,fdNo);
	//also get duplicat fd using open sys call
	printf("duplicate fd is %d\n",fd2);
	roffset=read(fd2,buff,7);
	write(0,buff,sizeof(buff));
	return 0;
}
