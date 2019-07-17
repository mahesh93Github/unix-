#include<stdio.h>
#include<unistd.h>
int main(int argc,char *argv[])
{
	printf("creating symbolic link to file\n");
	if(symlink(argv[1],argv[2])<0)
	{
		printf("error in linking\n");
		return 0;
	}
	printf("Done\n");
	return 0;
}
