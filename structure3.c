#include<stdio.h>
struct employee
{
	int id;
	char name[24];
	float sal;
}e[3];
void main()
{
	//struct employee e;
	int i;
	
	for(i=0;i<3;i++){
	printf("\n Enter Employee %d Detail \n ",i+1);
	printf("\n Enter Employee Id : ");
	scanf("%d",&e[i].id);
	printf("\n Enter Employee Name : ");
	scanf("%s",&e[i].name);
	printf("\n Enter Employee Salary : ");
	scanf("%f",&e[i].sal);
	}
	printf("\n Details of Employee \n");
	for(i=0;i<3;i++){
	
	printf("\n Employee Id : %d \n",e[i].id);
	printf("\n Employee Name : %s\n",e[i].name);
	printf("\n Employee Salary : %f\n",e[i].sal);
	}
	getch();
	
	
}
