#include<stdio.h> //area of triangle
#include<conio.h>
int main()
{
	int area,side,base;
	printf("enter the value of side:");
	scanf("%d",&side);
    printf("enter the value of base:");
	scanf("%d",&base);
	area=0.5*side*base;
	printf("%d",area);
}
