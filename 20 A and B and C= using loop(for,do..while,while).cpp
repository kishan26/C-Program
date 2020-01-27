#include<stdio.h>       //print number using loops while() & for() & do..while().
#include<conio.h>
int main()
{
int i,number,sum;

sum=0;
printf("print 1 to 10\n");


for(i=1;i>=1 && i<=10;i++)
{
	sum=sum+1;
	printf("\n%d\n",sum);
}

printf("print 51 to 60");
i=1;
sum=50;
while(i>=1 && i<=10)
{
	sum=sum+1;
	printf("\n%d\n",sum);
	i++;
}

printf("print 100 to 81");
i=20;
sum=101;
do
{
	sum=sum-1;
	printf("\n%d\n",sum);
	i--;
}while(i>=1 && i<=20 );


}
