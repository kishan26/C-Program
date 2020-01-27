#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("enter the three number:");
scanf("%d\n%d\n%d",&a,&b,&c);
if(a>b)
{
	if(a>c)
		printf("a is max");
	else
	printf("b is mex");
}
else
if(b>c)
printf("b is max");
else
printf("c is max");
}
