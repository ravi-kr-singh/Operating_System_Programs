#include<conio.h>
#include<stdio.h>

int mutex1=1,full=0,empty,x=0;

int wait(int s)
{
	return (--s);
}

int signal(int s)
{
	return(++s);
}

void producer()
{
	mutex1=wait(mutex1);
	full=signal(full);
	empty=wait(empty);
	x++;
	printf("\nProducer produces the item : %d\n",x);
	mutex1=signal(mutex1);
}

void consumer()
{
	mutex1=wait(mutex1);
	full=wait(full);
	empty=signal(empty);
	printf("\nConsumer consumes item : %d \n",x);
	x--;
	mutex1=signal(mutex1);
}

int main()
{
  printf("enter number of spaces :\n ");
    scanf("%d",&empty) ;
  printf("1. \tProducer\n");
  printf("2. \tConsumer\n");
  printf("3. \tExit\n");
    int x;
    while(1){
          scanf("%d",&x) ;
        switch (x)
        {
            case 1: if(mutex1==1&&empty!=0)
						producer();
					else
						printf("Buffer is full!!\n");
					break;
                break;
            case 2: if(mutex1==1&&full!=0)
						consumer();
					else
						printf("Buffer is empty!!\n");
					break;
                break;
            default:return 0;
        }
    }

}
