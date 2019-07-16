#include<stdio.h>
#include<unistd.h>
int main(int argc ,char * argv[])
{

		if(rename(argv[1],argv[2])<0)
		{
		printf("error in remname function\n");
		return 0;
		}
		printf("rename is complet\n");
	
	return 0;
}
