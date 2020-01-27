#include<stdio.h>
#include<conio.h>
struct student
{
	int i;
	int rollno[5];
	int math[25];
	int phy[25];
	int chem[25];
	char name[25];
}d[5];

main()
{
	int i;
	for(i=0;i<=4;i++)
	{
    printf("\n=========================================");
    printf("\n               [[%d]]                   ",i);
    printf("\n=========================================");
	printf("\nstudent name:");
	scanf("%s",&d[i].name);
	printf("student Rnumber:");
	scanf("%d",&d[i].rollno);
	printf("maths:");
	scanf("%d",&d[i].math);
	printf("physics:");
	scanf("%d",&d[i].phy);
	printf("chemistry:");
	scanf("%d",&d[i].chem);
   }
   
   printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
   printf("\n       printing student info.     ");
   printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");
   
   for(i=0;i<=4;i++)
	{
    printf("\n=========================================");
    printf("\n               [[%d]]                   ",i);
    printf("\n=========================================");
	printf("\nstudent name:");
	printf("%s",d[i].name);
	printf("\nstudent Rnumber:");
	printf("%d",d[i].rollno);
	printf("\nmaths:");
	printf("%d",d[i].math);
	printf("\nphysics:");
	printf("%d",d[i].phy);
	printf("\nchemistry:");
    printf("%d",d[i].chem);
   }
   
}

