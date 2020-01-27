#include<stdio.h>
#include <conio.h>


int main()
{
    int a[100],i,n,key;

    printf("Enter size of the  array : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
    	printf("enetr number a[%d]:",i);
        scanf("%d",&a[i]);
    }
     printf("\nEnter the key : ");
    scanf("%d", &key);

    for(i=1; i<=n; i++)
    {
        if(a[i]==key)
        {
   printf("\nprint founding element number:a[%d]",i);


        }

    }


}

