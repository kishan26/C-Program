#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct node
{
	int value;
	struct node *prev;
	struct node *next;
};

typedef struct node data_node;
data_node *first,*temp,*head;
int data;
 
void create()
{
	printf("enter data:");
	scanf("%d",&data);
	temp=(data_node*)malloc(sizeof(data_node));
	temp->value=data;
	printf("\n\n");
	if(first==0)
	{
		first=temp;
	}else
	{
	first->prev=temp;
	temp->next=first;
	    first=temp;
    }

	fflush(stdin);	
}

void display()
{
	do
	{		
	printf("##%d##",temp->value);
	temp=temp->next;
	}while(temp->next!=NULL);
	temp=first;
}

main()
{
	int number=0;
	while(number<3)
	{
		printf("enter the number:\n1==create new node\n2==display");
		scanf("%d",&number);
		switch(number)
		{
			case 1:
				{
				 create();
				}break;
				
			case 2:
			{
				display();
			}break;
				
			default:
				{
					printf("enter number is wrong:");
				}
		}
	}
}
