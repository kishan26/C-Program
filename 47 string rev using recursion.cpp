#include<stdio.h>
#include<conio.h>

void rev(char *str)
{
   if (*str)
   {
       rev(str+1);
       printf("%c", *str);
   }
}


int main()
{
   char a[] = "BMW";
   rev(a);
   return 0;
}
