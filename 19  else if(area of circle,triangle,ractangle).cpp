#include<stdio.h>
#include<conio.h>

	int main()
	{
	int number;
	float pi;
	int sum;
	int side1,side2,radious,base;
		pi=3.14;
	printf("enter number between 1 to 3\nenter your choice:");
	scanf("%d",&number);
	
	 if(number==1) //area of triangle
	  {
	  	printf("enter side:");
	  	scanf("%d",&side1);
	  	printf("enter base:");
	  	scanf("%d",&base);
	  	printf("area of triangle is:");
	  	sum=0.5*side1*base;
	  	printf("%d",sum);
	  }
	  else if(number==2) //area of ractangle
		{
	    printf("enter side1:");
	    scanf("%d",&side1);
	  	printf("enter side2:");
	  	scanf("%d",&side2);
	  	printf("area of ractangle is:");
	  	sum=side1*side2;
        printf("%d",sum);

		 }
	 else if(number==3)
		  {

	   printf("enter radious:"); //area of circle
	   scanf("%d",&radious);
	  	printf("area of circle is:");
	  	sum=pi*radious*radious;
        printf("%d",sum);
    }
	 else
	 printf("enter number is wrong");


	}


