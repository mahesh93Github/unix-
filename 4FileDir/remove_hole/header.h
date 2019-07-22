#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<unistd.h>
struct Hole
{
int start;
int end;
};

int findHole(int ,int ,struct Hole *);
int checkForOne(int ,int);
int checkForMoreHole(int,int);
int checkForTwoHole(int,int);
