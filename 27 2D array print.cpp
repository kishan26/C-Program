#include<stdio.h>
#include<conio.h>
int main()
{
	int a[2][2],i,j;
	
	printf("entering number:");
	
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}


printf("printing number:");

for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
		{

			printf("\n%d",a[i][j]);
		}
	}
	
}
