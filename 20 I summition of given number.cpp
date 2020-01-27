#include<stdio.h>
#include<conio.h>
int main()
{
	 int number,rem,sum;
	 sum=0;
	 printf("enter any number:");
	 scanf("%d",&number);
	 while(number!=0)
	 {
	 rem=number%10;
	 sum=sum+rem;
	 number=number/10;

    }
    printf("enter number sum is:=%d",sum);


}
