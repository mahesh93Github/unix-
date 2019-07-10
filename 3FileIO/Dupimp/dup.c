//write your own dup2 function ,without calling fcntl function 

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
/*int fdcpy(int fd1,int fd2)
  {   int fdN,i=0;
  int arrFd[fd2];
  printf("fd1 fd2 %d %d \n",fd1,fd2);
  for(i=0;i<fd2;i++){
  fdN = dup(fd1);
  if(fdN>0 && fdN!=fd2){			
//close(fdN);
}else if(fdN>0 && fdN == fd2)
{
printf("%d %d\n",fdN ,fd2);
break;

}

}
if((fdN[i]=dup(fd1))<0)
{
printf("ERROR: in if\n");
while(--i >0){
printf("in while %d\n",fdN[i]);
close(fdN[i]);
}
return -1;

}
printf("%d %d\n",fdN[i],fd2);
if(fdN[i]==fd2)
{
printf("%d %d\n",fdN[i],fd2);
break;
}
}
while(--i>=0)
{
printf("2while %d\n",fdN[i]);
}
return fd2;
}*/

int fdcpy(int fd1,int fd2)
{
	int arr[fd2];
	int i=0,j=0;
	for(i=0;i<fd2;i++)
	{
		arr[i]=dup(fd1);
		if(arr[i]==fd2)
		{   j=i;
			break;
		}

	}
	printf("***********%d\n",j);
	while(j>0)
	{if(arr[j]!=fd2)
		{


			close(arr[j]);
		}
	j--;
	}

	return fd2;


}
int main(int argc,char * argv[])
{       char buff[7];
	printf("dup program\n\n");
	int fd,fd2,fdNo,roffset;
	printf("after close\n");
	fd = open(argv[1],O_RDWR);
	printf("new fd %d\n",fd);
	if(fd==-1)
	{
		printf("ERROR in file openning\n");
		return 0;
	}
	printf("enter fd no you want:\n");
	scanf("%d",&fdNo);
	fd2=fdcpy(fd,fdNo);
	printf("duplicate fd is %d\n",fd2);
	roffset=read(fd2,buff,7);
	write(0,buff,sizeof(buff));
	return 0;
}
