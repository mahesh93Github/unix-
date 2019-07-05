#include<stdio.h>
#include"shared.h"

int main(){
int c;
printf("in main fun\n");
c=add(50,50);
printf("addition is %d",c);
c = sub(50,50);
printf("substraction is %d",c);

return 0;
}
