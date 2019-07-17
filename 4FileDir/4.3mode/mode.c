#include<stdio.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{
	int fd;
	umask(0400); // this mast file user-read  permission at time of creation.
	fd =creat("a.txt",0777); // here we create file with 0777 permission and above we hide user-read permission.
	if(fd<0)
	{
		printf("file is not created \n");
		return -1;
	}
	printf("Done\n");
	return 0;
}

/*
this program illustrate that if we hide the read permission of file then that fie is not open i.e we can not read that file .

*/
