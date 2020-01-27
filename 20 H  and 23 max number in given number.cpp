#include <stdio.h>
  int main()
   {
    int a[10];
    int i,n;
    int max;
    printf("Enter n values:");
    scanf("%d",&n);

    for (i = 0; i < n; i++)
	{
		printf("enter numbers[%d]:=\t",i);
    scanf("%d", &a[i]);
    }

    max = a[0];
    for (i = 1; i < n; i++)
	 {
if (a[i] >max)
{
max= a[i];
    }

    }
    printf("max of ten numbers is %d", max);

}
