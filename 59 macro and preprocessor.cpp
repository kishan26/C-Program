#include<stdio.h>
#include<conio.h>
#define CF main()
#define PI 3.14

CF
{
  float area;
  int radious;
  printf("enter the radious value:");
  scanf("%d",&radious);
  area=PI*radious*radious;
  printf("radious is:%f",area);
}
