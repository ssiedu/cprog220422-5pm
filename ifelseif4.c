#include<stdio.h>
void main()
{
	int a,b,c;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	printf("\n Enter the value of c : ");
	scanf("%d",&c);
	if(a>c && a>b)
	printf("\n a is greater than b and c ");
	
	else if(b>c)
	printf("\n b is greater than a and c ");
	
	else
	printf("\n c is greater than a and b ");
	getch();
	
	
}
