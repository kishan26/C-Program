#include<stdio.h>
#include<conio.h>
#define maxsize 100

void enter();
void delet();
void display();

int rear=-1,front=-1,queue[maxsize];


main()
{
	int number=0;
	while(number<4)
	{
		printf("\n1=enter\n2delet\n3display\nenter number:");
		scanf("%d",&number);
		switch(number)
		{
			case 1:
				{
					enter();
				}
				break;
			case 2:
				{
					delet();
				}
				break;
			case 3:
				{
					display();
				}
				break;
		}
	}
}


void enter()
{
	int value;
	  printf("\nenter value");
	  scanf("%d",&value);
	  if(rear==maxsize)
	  {
	  	printf("\nqueue is full:");
      }
      else
      {
      	queue[rear++]=value;
	  }
}

void delet()
{
	int a;
	if(front==rear)
	{
		printf("\nqueue is empty:");
		
	}
	else
	{
		a=queue[front++];
		printf("\n# %d #  is delete",a);
	}
}

void display()
{
	int i=front;
	if(front==rear)
	{
		printf("\nqueue is empty:");

	}
	else
	{
		while(i!=rear)
		{
			printf("\n# %d #",queue[i++]);
		}
	}
}
