#include<stdio.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{
int fd1;
fd1 = creat("abc.txt",0777);
if(fd1<0)
{
printf("ERROR while creating file\n");
return 0;
}
printf("changing file access  permission using chmod\n");

if(chmod("abc.txt",S_IRUSR|S_IWUSR|S_IRGRP)<0)
printf("ERROR in chaning file permission \n");

printf("file permission is changed\n");


return 0;
}
