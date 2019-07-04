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
	//	**q =(vol **)malloc(sizeof(vol *));
	*v=(vol *)malloc(sizeof(vol));
	//       (*v)->d=(disk *)malloc(sizeof(disk));
	//	(*v)->d->key=(int *)malloc(sizeof(int));
	printf("v->id :%d,v->d:%p",(*v)->id,(*v)->d);
	//if(!(*v)->id &&!(*v)->d &&!(*v)->d->key){
	printf("key not found\n");
	//		}
	printf("end of put\n");
}

int main(int argc ,char * argv[]){
	vol *v=NULL;
	printf("v->id :%d,v->d:%p",(v)->id,(v)->d);
	//put(&v);
	printf("end of main%p\n",&v);
	return 0;



}
