#include<stdio.h>
#include<sys/stat.h>
#include<fcntl.h>
#define rwrwrw (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)
int main()
{

	umask(0);//this umask set to 0 i.e not applyed any mask to current process
	if(creat("a.txt",rwrwrw)<0)
		printf("ERROR in file creation \n");
	umask(S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH); // umask is applyed for read-write of group and other,it is applyed from this line to next.
	if(creat("b.txt",rwrwrw)<0)
		printf("error in 2file creation\n ");

	return 0;
}

/*
this program shows that the we apply file creation mask then that applyed to the file b.txt and all given permission is masked.
so that b.txt has no read-write permission to group and other user.
but it is not apply for a.txt bcoz after creating file we mension umask .
*/
