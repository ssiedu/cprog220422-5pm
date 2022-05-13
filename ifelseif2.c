#include<stdio.h>
void main()
{
	int a,b;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	
	if(a>b)
	printf("\n a is greater than b ");
	else if(a == b)
	printf("\n a equal too b ");
	else
	printf("\n b is greater than a ");
	getch();
		
}
