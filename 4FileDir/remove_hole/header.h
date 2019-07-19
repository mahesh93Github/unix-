#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<unistd.h>
struct Hole
{
int start;
int end;
};

int  noHole(int ,int ,struct Hole *);

