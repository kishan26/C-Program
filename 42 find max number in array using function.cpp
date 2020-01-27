#include<conio.h>
#include<stdio.h>
void max();

main()
{
 max();
}

void max()
{
 int a[]={25,3,35,48,8},i;
 
 for(i=1;i<=4;i++)
 {
	if(a[i]>a[0])
	a[0]=a[i];
 }
 printf("maxnumber is :%d",a[0]);

 
}

