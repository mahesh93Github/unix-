#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
int main(int argc,char * argv[])
{
	struct stat ptr;
	if(stat(argv[1],&ptr)<0)
		printf("error in stat \n");
	if(S_ISDIR(ptr.st_mode))
	{
		if(remove(argv[1])<0)
		{
			printf("error in removing file\n");
			return 0;
		}
		printf("file is removed\n");  
		return 0;
	}else if(unlink(argv[1])<0)
	{
		printf("error in unlink file\n");
		return 0;
	}
	printf("file unlink\n");
	sleep(5);
	printf("done");
	return 0;
}
