#include<stdio.h> //find square and cube
#include<conio.h>
int main()
{
  int side,ans;
  printf("enter size of side:");
  scanf("%d",&side);
  
  //square
   ans=side*side;
   printf("%d\n",ans);
   
   //cube
   ans=side*side*side;
   printf("%d",ans);
}
