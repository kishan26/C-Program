#include<stdio.h>
#include<conio.h>

void add(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);

main()
{
	int a,b;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	
 add(a,b);
 sub(a,b);
 mul(a,b);
 div(a,b);
}

void add(int a,int b)
{
int sum;
sum=a+b;
printf("\n%d",sum);
}

void sub(int a,int b)
{
int sum;
sum=a-b;
printf("\n%d",sum);
}

void mul(int a,int b)
{
int sum;
sum=a*b;
printf("\n%d",sum);
}

void div(int a,int b)
{
int sum;
sum=a/b;
printf("\n%d",sum);
}
