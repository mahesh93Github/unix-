#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<unistd.h>
struct startEnd
{
int start;
int end;
};

int  removeFromBeginning(int ,int ,struct startEnd *);

