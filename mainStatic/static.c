/*
   this code is related to static library 

 */

#include<stdio.h>
#include<sys/stat.h>
void statistic(char * filename){ ///this function gives the statistic of given file
	struct stat ptr;


	printf("statistic function of library\n");
	if(stat(filename,&ptr)!=0){
		printf("con not open file \n");

	}else
	{
		printf("Inode No :%ld \n",ptr.st_ino);	
		printf("Device  No :%ld \n",ptr.st_dev);
		printf("Size in byte :%ld \n",ptr.st_size);

	}

}
