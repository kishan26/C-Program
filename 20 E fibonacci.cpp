 #include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,number,add,i;
	printf("enter number till you desire to print fibonacci series:");
	scanf("%d",number);
	a=0;
	b=1;
	for(i=0;i<=number;i++)
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
	    printf("%d",add);
		  
	}
}
