#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int ac,char*av[])
{
int fd;
int i=1;
char*sep=" ";
if(ac<1)
{
printf("\n INSUFFICIENT ARGUMENTS");
exit(1);
}
if((fd=open("balaji",0660))==-1)
{
printf("\n CANNOT CREATE THE FILE");
exit(1);
}
while(i<ac)
{
write(fd,av[i],(unsigned)strlen(av[i]));
write(fd,sep,(unsigned)strlen(sep));
i++;
}
close(fd);
return 0;
}
