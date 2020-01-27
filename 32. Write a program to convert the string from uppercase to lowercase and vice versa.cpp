#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
char a[10],b[10];
printf("enter the Capital string");
gets(a);
strlwr(a);
printf("convertatin of string in to lwr case is:");
puts(a);

printf("enter the Small string");
gets(b);
strupr(b);
printf("convertatin of string in to upr case is:");
puts(b);

}
