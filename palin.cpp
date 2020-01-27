#include<stdio.h>
#include<conio.h>

main()
{
	char a[100],i,size;
	printf("enter the string:");
	scanf("%s",&a);
	
	size=sizeof(a);
	
	for(i-0;i<=size;i++)
	{
		if(a[i]==a[size-i]);
		{
		printf("pelindrome");
	    }
	    break;
	}
}
