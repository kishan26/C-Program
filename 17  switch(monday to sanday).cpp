#include<stdio.h>
#include<conio.h>
int main()
{
	int choice;
	up:
	printf("\nenter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:

				printf("sunday");
				break;
			
		case 2:

			printf("monday");
			break;
			
		case 3:

			 printf("tuesday");
			 break;
			 
		case 4:

			 printf("wednesday");
			 break;
			 
		case 5:

			 printf("thursday");
			 break;
			 
		case 6:

			 printf("friday");
			 break;
			 
		case 7:

			 printf("seturday");
			 break;

		default:
			
			printf("enter number between 1 to 7");

	} goto up;
	
}
