#include<stdio.h>
#include<conio.h>
int main()
{
	int ArrayA[3]={1,2,3};
	int *ptr;
	ptr=ArrayA;
	printf("\naddress:%p - array valye:%d\n",ptr,*ptr);
	ptr++;
	printf("\naddress:%p - array valye:%d\n",ptr,*ptr);

}
