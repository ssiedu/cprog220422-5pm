#include<stdio.h>
void main()
{
	FILE *fp;
	int id;
	char name[10];
	float sal;
	fp=fopen("emp.txt","a+");
	if(fp==NULL)
	{
		printf("\n File does not exist");
		return;
	}
	printf("\n Enter Id : ");
	scanf("%d",&id);
	fprintf(fp,"Id : \n%d\n",id);
	printf("\n Enter name : ");
	scanf("%s",&name);
	fprintf(fp,"Name : %s\n",name);
	printf("\n Enter salary : ");
	scanf("%f",&sal);
	fprintf(fp,"Salary : %.2f",sal);
	
	fclose(fp);
}
