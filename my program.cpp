#include<stdio.h>
#include<conio.h>
main()
{
	char strA[20],strB[20];
	int i,j,sumA=0,sumB=0;

	printf("enter string A:");
	scanf("%s",&strA);
	printf("enter string B:");
	scanf("%s",&strB);
	
	printf("==============concate two string:===============");
	for(i=0;strA[i]!=NULL;i++)
	{
	   sumA=sumA+1;
	}
	
	printf("\nstring A length is:");
	printf("%d",sumA);
	
		for(i=0;strB[i]!=NULL;i++)
	{
	   sumB=sumB+1;
	}

	printf("\nstring B length is:");
	printf("%d",sumB);
	
	
	for(i=sumA;i<=20;i++)
	{


		strA[i]=strB[i-sumA];

	}
	printf("\nstring is:%s",strA);
}
