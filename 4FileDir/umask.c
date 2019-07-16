// this program is use ilustratet the use of umask .
//this program use to add or applay mask on the file permission 
//if check default value of umask using $umask it gives 0002 value in octal 
#include<sys/stat.h>
#include<stdio.h>
#include<fcntl.h>
#define rwrwrw (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH) //here we create macro for rw permission for user,group,other 
int main()
{
int fd1,fd2;
umask(0);// using this we can disable 0002 (default value of mask) 
if(creat("abc",rwrwrw)<0)
printf("ERROR in file creation of abc\n");
umask(S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH); //here we can applay umask filter so that after creating file this all permission from umask is removed from create file .
if(creat("xyz",rwrwrw)<0)
printf("ERROR in file creation of xyz\n");



return 0;
}
/*


*
maheshlinux@maheshlinux-VirtualBox:~/unix-/4Dir$ gcc umask.c 
maheshlinux@maheshlinux-VirtualBox:~/unix-/4Dir$ ./a.out 
maheshlinux@maheshlinux-VirtualBox:~/unix-/4Dir$ ls -l abc xyz
output after umask(0) 
-rw-rw-rw- 1 maheshlinux maheshlinux 0 Jul 16 12:23 abc
-rw-rw-rw- 1 maheshlinux maheshlinux 0 Jul 16 12:23 xyz

out put before umask(0)

maheshlinux@maheshlinux-VirtualBox:~/unix-/4Dir$ ./a.out 
maheshlinux@maheshlinux-VirtualBox:~/unix-/4Dir$ ls -l abc xyz 
-rw-rw-r-- 1 maheshlinux maheshlinux 0 Jul 16 12:23 abc
-rw-rw-r-- 1 maheshlinux maheshlinux 0 Jul 16 12:23 xyz

maheshlinux@maheshlinux-VirtualBox:~/unix-/4Dir$ umask 
0002        //default mask value
maheshlinux@maheshlinux-VirtualBox:~/unix-/4Dir$ umask 
0002
 
maheshlinux@maheshlinux-VirtualBox:~/unix-/4Dir$ ls -l abc xyz 
-rw-rw-rw- 1 maheshlinux maheshlinux 0 Jul 16 12:25 abc

out put after umask(S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)
-rw------- 1 maheshlinux maheshlinux 0 Jul 16 12:25 xyz



