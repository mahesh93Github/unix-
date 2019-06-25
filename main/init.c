#include<stdio.h>
//#include"static.h"
#include"shar.h"
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
