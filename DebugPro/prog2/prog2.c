/*
this program is also for solving segmentation fault
here in 2 case fault is occure
1.we access the value of struture disk via val and here memary is allocated only of strct val so that we cannot access value of disk
2.we aalocate memary for v ptr using malloc so that all value is not initialize bydefault and after that we check that value in if condition 
so that we get an fault 


*/
#include<stdio.h>
#include<stdlib.h>
typedef struct disk{
	int magic;
	char flag;
	int *key;
}disk;

typedef struct val{
	int id;
	disk *d;
}vol;

void put(vol **v){
	*v=(vol *)malloc(sizeof(vol));
	printf("v->id :%d,v->d:%p",(*v)->id,(*v)->d);
	if(!(*v)->id &&!(*v)->d &&!(*v)->d->key){
	printf("key not found\n");
		}
}

int main(int argc ,char * argv[]){
	vol *v=NULL;
	printf("v->id :%d,v->d:%p",(v)->id,(v)->d);
	//put(&v);
	printf("end of main%p\n",&v);
	return 0;



}
