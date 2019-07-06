/*
this program is main base program for static and shared library 
using this program we access static as well as shared library function here

*/

#include<stdio.h>
//#include"static.h"   ////header file for accessing static file function 
#include"/home/mahesh/unix-/mainShar/shar.h" 	///heared file for accessing shared file function 
int main(int argc ,char * argv[]){
	printf("init program \n");
	if(argc<0){
		printf("insufficent argument\n");
		return -1;
	}
	statistic(argv[1]);
	printf("end of init program\n");
	return 0;

}
