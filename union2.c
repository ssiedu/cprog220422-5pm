#include<stdio.h>
#include<string.h>
union Data
{
	int id;
	float sal;
	char name[20];
};
void main()
{
	union Data d;
	d.id=101;
	printf("\n Person id : %d\n",d.id);
	d.sal = 45000;
	printf("\n Person Salary : %.2f\n",d.sal);
	strcpy(d.name,"Ram");
	

	printf("\n Person Name : %s\n",d.name);
}
