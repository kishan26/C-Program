#include<stdio.h> //find simple interest
#include<conio.h>
int main()
{
	int i,p,r,n;
	printf("enter the value of p:");
	scanf("%d",&p);
    printf("enter the value of r:");
	scanf("%d",&r);
	printf("enter the value of n:");
	scanf("%d",&n);
   i=p*r*n/100;
	printf("%d",i);
}

