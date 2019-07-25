#include"header.h"

int removeFromBeginning(int fd1,int fd2 ,struct startEnd *ptr)
{
char buff;
printf("value of pointer %p %d %d",ptr,fd1,fd2);
if(fd1 < 0 || fd2 < 0)
{
printf("ERROR : in removeFromBeginning fun\n");
return -1;
}

while(read(fd1,&buff,1)<0)
{
write(fd2,&buff,sizeof(buff));

}



}
