#include<stdio.h>
#include<conio.h>

int main()
{
		int a[4][4],b[4][4],c[4][4],i,j;

	printf("entering number for a tipe metrix:\n");

	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
   printf("\nentering number for b tipe metrix:\n");

		for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	

	 
	 
	 printf("\nprinting sum of a and b is c type metrix:\n");

		for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			 c[i][j]=a[i][j]+b[i][j];
			printf("\n%d",c[i][j]);
		}
	}
	
}
