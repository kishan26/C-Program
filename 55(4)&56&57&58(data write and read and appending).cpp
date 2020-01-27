#include<stdio.h>
#include<conio.h>

main()
{
	FILE *date;
	char data[10];
	date=fopen("amc.txt","w");
	{
	printf("enter data in file:");
	scanf("%s",&data);
	fputs(data,date);
   }
	fclose(date);
	

	
	date=fopen("amc.txt","r");

		printf("entering data is:");
		printf("\ndata:%s",data);

	fclose(date);
	
	date=fopen("amc.txt","a");
	{
	printf("\n appending data in file:");
	scanf("%s",&data);
	fputs(data,date);
   }
	fclose(date);
	
}








