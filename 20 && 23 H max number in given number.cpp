#include <stdio.h>
  int main()
   {
    int a[10];
    int i,n;
    int greatest;
    printf("Enter n values:");
    scanf("%d",&n);
    //Store 10 numbers in an array
    for (i = 0; i < n; i++)
	{
		printf("enter numbers[%d]:=\t",i);
    scanf("%d", &a[i]);
    }
    //Assume that a[0] is greatest
    greatest = a[0];
    for (i = 1; i < n; i++)
	 {
if (a[i] > greatest)
{
greatest = a[i];
    }

    }
    printf("Greatest of ten numbers is %d", greatest);

}
