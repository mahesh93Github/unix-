#include<stdio.h>
#include<sys/stat.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{

int fd ;
unlink("/dev/fd/1");
fd =creat("/dev/fd/1",O_RDONLY);
if(fd<0)
printf("ERROR : in file creation\n");
else 
printf("file is created\n");
return 0;
}

/*
in this program if path is /dev/fd/1 then at beginning it call unlink() as /dev/fd/1 as argument ,then it decrement the link count of /fd/1 file by one ,if file link count is 0 then data of that file is deleted/file is deleted and next line we create new file at that same path with
same name. 

*/
