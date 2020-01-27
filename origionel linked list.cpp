#include<stdio.h>
#include<conio.h>
#include<malloc.h>
int count();
void display();

struct node
{
	int value;
	struct node *next;
};

typedef struct node data_node;
data_node *first,*temp,*head;
int data;

void insert()
{
	printf("enter data:");
	scanf("%d",&data);
	temp=(data_node*)malloc(sizeof(data_node));
	temp->value=data;
	if(first==0)
	{
		first=temp;
	}
	else
	{
		head->next=temp;
	}
	temp->next=0;
	head=temp;
	fflush(stdin);
}
void delet()
{
	int i,position,countvalue;
	display();
	temp=first;
	countvalue=count();
	printf("\nenter position:");
	scanf("%d",&position);
	if(position==1 )                      //position 1
	{
		temp=first;
		first=temp->next;
		temp->next=NULL;
		printf("\ndelete successfully:");
	}
	else if(position<countvalue)          //specific position
	{
    temp=first;
	for(i=1;i<position-1;i++)
	{
	   temp=temp->next;
	}
	temp->next=temp->next->next;
	printf("\ndelete succesfully");
   }
   else if(position==countvalue)         //last position;
   {
	 if(first==NULL)
	 {
	 	printf("node is empty:");
	 }
	 else
	 {
	 	temp=first;
   while(temp->next->next!=NULL)
	 	{
	 		temp=temp->next;
		}
		head=temp;
		temp->next=NULL;
	 }
   }
   else
   {
	printf("\nenter position less then count value");
   }

}

void display()
{
	printf("printing nodes:");
	temp=first;
	while(temp!=NULL)
	{
		printf("\t%d",temp->value);

		temp=temp->next;
	}
}

int count()
{
	int coun=0;
	while(temp!=NULL)
	{
		coun++;
		temp=temp->next;
	}
	printf("count is:%d",coun);
	return coun;
}


main()
{
	int number=0;
	
	while(number<5)
	{
		printf("\n1=insert:\n2=delete\n3=display\n:enter the number:");
		scanf("%d",&number);
		switch(number)
		{
			case 1:
				{
					insert();
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
			case 4:
				{
					count();
				}
				break;
		}
	}
}
