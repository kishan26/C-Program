#include<stdio.h>
#include<stdio.h>

main()
{
	char b[20];
	int sum,i;
	sum=0;
	printf("enter string:");
	gets(b);
	for(i=0;b[i]!='\0';i++)
	{
		sum=sum+1;
		putchar(b[i]);


	}
	printf("==");
	printf("%d",sum);
	
}
