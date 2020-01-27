#include<stdio.h>
#include<conio.h>
void display(int,char);
struct e1
{
	int emp_id;
	char name[25];
	char department[10];
	float salary;
};
int main()
{
	
	struct e1 emp1={125,"sampth","operator",7500.00};
	display(emp1.emp_id,emp1.name);
	return 0;
	}
void display(int e_no,char e_name)
	{
		printf("%d%s",e_no,e_name);

	
	}
