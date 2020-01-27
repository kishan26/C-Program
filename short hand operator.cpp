#include<stdio.h> //short hand operator
#include<conio.h>
int main()
{
		int b,c;

		printf("enter the value of b:-");
		scanf("%d",&b);
		c=5;
		//operation


	    //addition
		c+=b;
		printf("%d\n",c);

		//multiplication
		c*=b;
		printf("%d\n",c);

		//substraction
		c-=b;
		printf("%d\n",c);

		//dividetion
		c/=b;
		printf("%d\n",c);

		//modulo
		c%=b;
		printf("%d\n",c);
}
