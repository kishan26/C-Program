#include<stdio.h>
#include<conio.h>

main()
{
	int number,n,rev=0,rem;
	printf("enter any number:");
	scanf("%d",&number);
	n=number;
	
	while(number!=0)
	{
	rem=number%10;
	rev=rev*10+rem;
	number=number/10;
   }
printf("riverse number is:%d",rev);

if(n==rev)
{
	printf("\nnumber is pelindrome:");
}
else
{
	printf("\nnumber is not pelindrome:");
}


}
