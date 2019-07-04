/*
this file contains the code related to shared file 

*/

#include<stdio.h>
#include<sys/stat.h>

void statistic(char *fname){     ///this function gives statistic of the of the given file 
	struct stat ptr;

	if(stat(fname,&ptr)!=0){
		printf("erroe in stat\n");

	}else{

		printf("size of file %ld\n",ptr.st_size);
		printf("inode no of file %ld\n",ptr.st_ino);
		printf("stat Done\n");

	}


}
