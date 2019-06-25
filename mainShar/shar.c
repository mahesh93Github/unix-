#include<stdio.h>
#include<sys/stat.h>

void statistic(char *fname){
struct stat ptr;

if(stat(fname,&ptr)!=0){
printf("erroe in stat\n");

}else{

printf("size of file %ld\n",ptr.st_size);
printf("inode no of file %ld\n",ptr.st_ino);
printf("stat Done\n");

}


}
