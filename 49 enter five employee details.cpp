#include<stdio.h>
#include<conio.h>


struct emp1
{
 int age[28],emp_no,i;
 char emp_name[20],emp_address[20];
}p[5];

main()
{
	int i;
	for(i=0;i<=4;i++)
	{
		
	printf("================================");
	printf("\n             [[%d]]             ",i);
	printf("\n================================");
    printf("\nemp_no:");
 	scanf("%d",&p[i].emp_no);
 	printf("emp_name:");
 	scanf("%s",&p[i].emp_name);
 	printf("emp_address:");
 	scanf("%s",&p[i].emp_address);
 	printf("age:");
 	scanf("%d",&p[i].age);
 	}
 	
 	
 	printf("\n\n==========details==========\n");

	for(i=0;i<=4;i++)
	{
	printf("\n================================");
	printf("\n             [[%d]]             ",i);
	printf("\n================================");
	printf("\nemp_no:");
 	printf("%d",p[i].emp_no);
 	printf("\nemp_name:");
 	printf("%s",p[i].emp_name);
 	printf("\nemp_address:");
 	printf("%s",p[i].emp_address);
 	printf("\nage:");
 	printf("%d",p[i].age);
	}
}
