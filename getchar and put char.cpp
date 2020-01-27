#include<stdio.h>
#include<conio.h>

main()
{
	char c[10];
	printf("enter the char:");
	while(c[10]!='5')
	{
		c[10]=getchar();
	}
	
	printf("priinting char:");
	
	while(c[10]!=NULL)
	{
	putchar(c);
	break;
	}
}
