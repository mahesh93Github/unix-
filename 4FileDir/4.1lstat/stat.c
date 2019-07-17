#include<stdio.h>
#include<sys/stat.h>

int main(int argc ,char * argv[])
{
	struct stat ptr;

	if(lstat(argv[1],&ptr)<0){
		printf("ERROR in stat \n");
		return 0;

	}
	if(S_ISREG(ptr.st_mode))
	{
		printf("file is regular file\n");
	}
	else if(S_ISLNK(ptr.st_mode))
	{
		printf("file is link file\n");
	}else if(S_ISBLK(ptr.st_mode))
	{
		printf("file are block file\n");
	}else if(S_ISCHR(ptr.st_mode))
	{
		printf("file are character file\n");
	}else if(S_ISFIFO(ptr.st_mode))
	{
		printf("file are pipe\n");
	}else if(S_ISSOCK(ptr.st_mode))
	{
		printf("file are scoket file\n");
	}

	return 0;
}
/*
 this program is use to show the file type using stat sys call
but if we pass symbolic link file to program then it gives out put as regular file bcoz of stat 
if we pass to lstat then it gives correct output as symbolic link 

in case of lstat if input file is symbolic link then it gives info about symbolic link and not about file refered by symbolic link.

*/


