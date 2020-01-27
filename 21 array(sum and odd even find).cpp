#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],sum,odd,even,number;
	int i,count_odd,count_even;
	sum=0;
	count_odd=0;
	count_even=0;
	printf("\nenter the number:");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
		printf("\nenter number a[%d]:=",i);
		scanf("%d",&a[i]);
    }

	for(i=1;i<=number;i++)
	{
	sum=sum+a[i];
	}
	printf("\nsum of this number:");
	  printf("%d",sum);
	  


   for(i=1;i<=number;i++)
	  {
		  if (a[i]%2==0)
		  {
			printf("\neven number is:");
			printf("%d",a[i]);
			count_even++;
			
		  }
		  else
		  {
		  	printf("\nodd number is:");
		  	printf("%d",a[i]);
		  	count_odd++;
		  }
	}
	printf("\n\n");
	printf("===counting===");
		  printf("\neven number is:%d",count_even);
		  printf("\nodd number is:%d",count_odd);
		  
		  

}
