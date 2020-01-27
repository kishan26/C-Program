#include<stdio.h>
#include<conio.h>

void fibon(int);

main()
{

	int a,b,number,add,i,x;
	printf("enter number till you desire to print fibonacci series:");
	scanf("%d",&number);

   fibon(number);

}

void fibon(int x)
{


	int a,b,add,i;

	a=0;
	b=1;
	for(i=0;i<=x;i++)
 {

	if (i<= 1)
	{
      add = i;
    }
    else
    {
    add=a+b;
    a=b;
    b=add;
    }
printf("\n%d",add);
 }
 

}




