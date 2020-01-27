#include<string.h>
#include<stdio.h>
#include<conio.h>

main()
{
    int i,n;
    char str[20],rev[20];
    printf("\nEnter the String to get reversed:==");
	scanf("%s",&str);
    n=strlen(str);
	printf("\nReversed string is \n");
	   for(i=n-1;i>=0;i--)
	{

    printf("%c",str[i]);
    str[i]=getchar(rev);

	}
	


   if(str[20]==rev[20])
   {
	   printf("\npelendrome");
   }
   else
   {
   	printf("\n not pelendrome");
   }

}
