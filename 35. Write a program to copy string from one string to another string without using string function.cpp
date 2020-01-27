#include<stdio.h>
#include<conio.h>
main()

{
    char a[100], b[100], i;
    printf("Enter string s1: ");
    scanf("%s",a);
    for(i = 0; a[i] != '\0'; ++i)
    {
        b[i] = a[i];
    }
    printf("String b: %s", b);

}
