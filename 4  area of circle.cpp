#include<stdio.h> //area of triangle
#include<conio.h>
int main()
{
	int radious;
	float pi,area;
	pi=3.14;
	printf("enter the value of radious:");
	scanf("%d",&radious);
    area=pi*radious*radious;
	printf("%f",area);
}
