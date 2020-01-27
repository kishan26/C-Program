#include<stdio.h>
#include<conio.h>
#define maxsize 100

int stack[maxsize];
int stacktop=0;

void push();
void pop();
void display();

main()
{
	int number=0;
	while(number<=3)
	{
		printf("enter your choice:\n1=push\n2=pop\n3=display");
		scanf("%d",&number);
		switch(number)
		{
			case 1:
				{
				    push();
				}
				break;
			case 2:
				{
					pop();
				}
				break;
			case 3:
				{
					display();
				}
			    break;

                        deafault:
                                {
                                       printf("you enter invlalid choice:");
                                }
		}
	}
}

void push()
{
  int value;
  printf("enter the value:");
  scanf("%d",&value);
  if(stacktop<maxsize)
  {
  	stack[stacktop++]=value;
  }
  else
  {
  	printf("\nstack is full:");
  }
}

void pop()
{
	int a;
	if(stacktop>0)
	{
	stacktop--;
	a=stack[stacktop];
	}
	else
	{
		printf("\nstack is empty:");
	}
	printf("\n# %d # is poped",a);
}

void display()
{
	int i=0;
	printf("\nprinting stack:");
	if(stacktop>0)
	{
		while(i<stacktop)
		{
			printf("\t # %d #",stack[i++]);
		}
	}
	else
	{
		printf("stack is empty:");
	}
	
}
