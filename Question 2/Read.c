#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
char b[20];
int fd,xr;
if((fd=open("write",0))==-1)
{
printf("cannot open file");
exit(1);
}
do
{
xr=read(fd,b,20);
b[xr]="\0";
printf("%s",b);
}
while(xr==20);
close(fd);
return 0;
}
