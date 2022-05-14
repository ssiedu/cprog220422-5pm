#include<stdio.h>
void main()
{
	int a,b;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);	
	if(a!=b)
	{
		printf("\n a is not equal too b ");
		if(a>b)
		{
			printf("\n a is greater than b ");	
		}
		else
		{
			printf("\n b is greater than a ");
		}
	}
	else
	{
		printf("\n a is equal too b");
	}	
	getch();	
}
