#include<stdio.h>
#include<conio.h>
#include<malloc.h>
int count();


struct node
{
	int value;
	struct node *next;
};

typedef struct node data_node;
data_node *first,*temp,*head,*name;
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
	temp->next=first;
	head=temp;

	fflush(stdin);
}

void display()
{
	printf("printing nodes:");
	temp=first;
    do
	{

	  	printf("\t%d",temp->value);
		temp=temp->next;

	}while(temp!=first);
}

void delet()
{
	int countvalue,pos,i;
	countvalue=count();
	printf("\nenter position:");
	scanf("%d",&pos);

	temp=first;
	if(pos>0 && pos<=countvalue)
 {
	if(pos==1)
	{
		temp=first;
		first=temp->next;
		head->next=first;
		temp=head;
	}
	else if(1<pos && pos<countvalue)
	{
		temp=first;
		for(i=1;i<pos-1;i++)
		{
		temp=temp->next;
		}
		temp->next=temp->next->next;
		printf("\ndelete successfully");
	}
	else if(pos==countvalue)
	{
		temp=first;
		for(i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
		temp->next=first;
		head=temp;
		printf("\ndelete successfully");
	}
	else
	{
		printf("\nposition is wrong:");
	}

 }
 else
 {
 	printf("\nposition is wrong:");
 }
 fflush(stdin);
}

int count()
{
	temp=first;
	int coun=0;
	 do
	{
		coun++;
		temp=temp->next;
	}while(temp!=first);
	printf("\ncount:=%d",coun);
	return coun;
}

main()
{
	int number=0;

	while(number<=4)
	{
		printf("\n1=insert:\n2:display\n3:count\n4:delet");
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
					display();
				}
				break;

			case 3:
				{
					count();
				}
				break;
			case 4:
				{
					delet();
				}
				break;

		}
	}
}
