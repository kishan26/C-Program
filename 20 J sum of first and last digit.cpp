#include<stdio.h>
#include<conio.h>
int main()
{
 int number,sum,lastdigit,firstdigit;
 printf("enter any number:");
 scanf("%d",&number);

 lastdigit=number%10;

 printf("find first digit:");
 while(number>=10)
 {
 	number=number/10;
 }
 firstdigit=number;

 sum=lastdigit+firstdigit;
 printf("sum=%d",sum);



}
