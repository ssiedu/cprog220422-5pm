#include<stdio.h>
struct employee
{
	int id;
	char name[24];
	float sal;
}e;
void main()
{
	printf("\n Enter Employee Id : ");
	scanf("%d",&e.id);
	printf("\n Enter Employee Name : ");
	scanf("%s",&e.name);
	printf("\n Enter Employee Salary : ");
	scanf("%f",&e.sal);
	
	printf("\n Employee Id : %d ",e.id);
	printf("\n Employee Name : %s",e.name);
	printf("\n Employee Salary : %f",e.sal);
	
	getch();
	
	
}
