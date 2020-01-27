#include<stdio.h>
#include<conio.h>
int main()
{
	int choice;
	int num1,num2,sum;
	printf("enter num1:");
	scanf("%d",&num1);
	printf("\nenter num2:");
	scanf("%d",&num2);
	up:
	printf("\n 1=addition....2=substraction.....3=multiplication.....4=dividation  \nenter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:

			   sum=num1+num2;
			   printf("%d",sum);
				break;

		case 2:

			    sum=num1-num2;
			   printf("%d",sum);
			break;

		case 3:

	           sum=num1*num2;
			   printf("%d",sum);
			 break;

		case 4:

               sum=num1/num2;
			   printf("%d",sum);
			 break;



		default:

			printf("enter number between 1 to 4");

	} goto up;

}
