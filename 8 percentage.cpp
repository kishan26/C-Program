#include<stdio.h>
#include<conio.h>
int main()
{
	int s1,s2,s3,s4,s5,percentage;
	printf("enter s1 mark:");
	scanf("%d",&s1);
	printf("\nenter s2 mark:");
	scanf("%d",&s2);
	printf("\nenter s3 mark:");
	scanf("%d",&s3);
	printf("\nenter s4 mark:");
	scanf("%d",&s4);
	printf("\nenter s5 mark:");
	scanf("%d",&s5);
	
	//total marks is have 100 per subject
	
	percentage=(s1+s2+s3+s4+s5)/5;
	printf("percentage is:");
	printf("%d",percentage);
}
