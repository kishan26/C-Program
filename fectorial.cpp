#include<stdio.h>     //find fectorial
#include<conio.h>
int main()
{
	int fect,i,number;
	fect=1;
	printf("enter the number:");
	scanf("%d",&number);
	i=1;
	while(i<=number)
	{
		fect=fect*i;
		i++;

	}
	printf("%d",fect);


}
