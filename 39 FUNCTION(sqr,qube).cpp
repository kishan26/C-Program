#include<stdio.h>
#include<conio.h>
int cube(int);
int sqr(int);

main()
{
	static int side,p,q;
   printf("enetr side of substence:");
   scanf("%d",&side);

   p=sqr(side);
   q=cube(side);
   printf("cube=%d",p);
   printf("sqr=%d",q);
}

int cube(int side)
{
	int cube;
	 cube=side*side*side;
	 return (cube);
}

int sqr(int side)
{
	int sqr;
	sqr=side*side;
	return (sqr);
}
