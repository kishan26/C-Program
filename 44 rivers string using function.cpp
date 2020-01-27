#include<stdio.h>
#include<string.h>
void string();

main()
{
string();
}

void string()
{
	char a[50];
	int length;
	printf("enter string:");
	scanf("%s",&a);
	printf("length of string:");
	
	length=strlen(a);
	printf("%d",length);
	
	printf("\nrev string:%s",strrev(a));
	
}
