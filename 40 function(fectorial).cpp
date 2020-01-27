#include<stdio.h>
#include<conio.h>


int fect(int fct)
{
	int i,number;
	printf("enter fecting number:");
	scanf("%d",&number);
	fct=1;

	for(i=1;i<=number;i++)
	{
		fct=fct*i;
	}

	return fct;
}

main()
{
int p,fct;
p=fect(fct);
printf("fectorial=%d",p);
}
