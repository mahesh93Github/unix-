#include<stdio.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{
	int fd,fd1;
	fd=umask(0777);
	printf("Done %d",fd);
	fd1=creat("a.txt",0755);
	if(fd1<0){
		printf("Error in file creation \n");
		return 0;
	}
	umask(0);
	fd1=creat("b.txt",0755);
	if(fd1<0){
		printf("Error in file creation \n");
		return 0;
	}
	return 0;
}
/*
this program demonstrat umask file creation mask for current running process .
in this program after applying mask and after creating new file for every that file the file permission is masked so that that file not get all permission 

in our case we set file mask to 0777 i.e hide all permission of created file (forgetting its create time permission parameter), so that our file has no permissions.


*/
