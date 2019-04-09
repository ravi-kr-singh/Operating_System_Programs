#include<stdio.h>
void main()
{
	int  i,n,seg[20],lt[20],base[20],log[20],phy[20];
	printf("\n Enter the number of segments:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter the segment no of %d :",i+1);
		scanf("%d",&seg[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\n Enter the limit address of %d :",i+1);
		scanf("%d",&lt[i]);
	}
          for(i=0;i<n;i++)
	{
		printf("\n Enter the base address of %d :",i+1);
		scanf("%d",&base[i]);
	}
	printf("\n The segment no \t segment table \n");
	for(i=0;i<n;i++)
	{
		printf("\n %d                     \t %d   \t %d",seg[i],lt[i],base[i]);
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		printf("\n Enter the logical no of %d :",i+1);
		scanf("%d",&log[i]);
	}
	for(i=0;i<n;i++)
	{
		if(log[i]<lt[i])
		{
			phy[i]=log[i]+base[i];
	          }
		else
		{
			phy[i]=-1;
		}
	}
printf("\n Physical address");
	for(i=0;i<n;i++)
	{
		printf("\n %d",phy[i]);
	}
}
