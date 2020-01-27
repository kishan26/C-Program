#include<stdio.h>
#include<stdio.h>
main()
{
	char b[45]="kishan",c[25];
	int i,sum=0;
	printf("you are enter string:");
	for(i=0;b[i]!=NULL;i++)
	{
		putchar(b[i]);
	}
	for(i=0;b[i]!=NULL;i++)
	{
		sum++;
	}
	printf("\nstring length is:%d",sum);
	printf("\nprinting riverse string:");
	printf("\n");
	for(i=sum-1;b[i]!='\0';i--)
	{
		c[5-i]=b[i];
		putchar(b[i]);
	}
	printf("\nreverse string is:");
	printf("%s",c);
	

	
	





}
