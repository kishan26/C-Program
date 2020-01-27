#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,i,n1,n2;
	printf("enter sizeof array:");
	scanf("%d",&n1);
	ptr=(int*)malloc(n1*sizeof(int));
	printf("address of previously allocated meemory");
	for(i=0;i<n1;++i){
	printf("%d\n",ptr+i);
	}
	printf("\n enter new sizeof array:");
	scanf("%d",&n2);
    ptr = realloc(ptr,n2*sizeof(int));
	printf("address of newly allocated memory");
	for(i=0;i<n2;++i){
	printf("%d\n",ptr+i);
	}
	return 0;
}
