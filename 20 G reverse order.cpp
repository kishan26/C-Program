#include<stdio.h>
#include<conio.h>
int main()
{
 int number,rev,rem;
 rev=0;
	printf("entr the number:");
	scanf("%d",&number);
while(number!=0)
{
	rem=number%10;
	rev=rev*10+rem;
	number=number/10;
}
	   printf("reverse number=%d",rev);

}

