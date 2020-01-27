#include<stdio.h>
#include<conio.h>
void desplay();


struct employee
{
 int age,emp_no;
 char emp_name[20],emp_address[20];
}p;

main()
{
 printf("emp_no:");
 scanf("%d",&p.emp_no);
 printf("emp_name:");
 scanf("%s",&p.emp_name);
 printf("emp_address:");
 scanf("%s",&p.emp_address);
 printf("age:");
 scanf("%d",&p.age);
 printf("\n\n==========details==========\n");
 printf("emp_no:");
 printf("%d",p.emp_no);
 printf("\nemp_name:");
 printf("%s",p.emp_name);
 printf("\nemp_address:");
 printf("%s",p.emp_address);
 printf("\nage:");
 printf("%d",p.age);

}
