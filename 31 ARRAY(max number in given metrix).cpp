#include<stdio.h>
#include<conio.h>
int main()
{
	int a[2][2],i,j,max;

	printf("entering number:");

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",a[i][j]);
		}
	}
	

	max=a[0][0];
	printf("searching number:");

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(a[i][j]>max)
            {
			   max=a[i][j];
             }

		}
	}
	
	printf("max number is:%d",max);
}
