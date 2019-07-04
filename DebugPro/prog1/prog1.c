#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct demo{
	char p;
	int id;
	char *name;

}demo;

void fill(demo *d){
	d->p=1;
	d->id =100;
	//strcpy(d->name,"a");
	d->name=(char *)malloc(10);
	char *const p="abcd";

	//printf("%s %p ",d->name ,d->name);
	//strcpy(p,"Msys");
	printf("value of const char *p is %s and address %p\n",p,p);
	if(d->p &&(strcpy(d->name,"Msys")&& d->id)){
		printf("demo filled\n");
		printf("after strcpy %s\n",d->name);
	}


}	

int main(int argc ,char *argv[]){
	demo d={0,0,"india"};
	fill(&d);
	return 0;
}
