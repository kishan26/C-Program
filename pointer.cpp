#include<stdio.h>
#include<conio.h>

main()
{
	int i,number,rem,div,d,sum;
	sum=0;
	printf("enter the number:");
	scanf("%d",&number);
	printf("enter divider:");
	scanf("%d",&d);
	while(number==0)
	{
		rem=number%div;
		d=rem*div;
		sum=sum+d;
	}
	printf("%d",sum);
	printf("%d\n",rem);



}
