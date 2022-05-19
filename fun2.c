#include<stdio.h>
void sum();  // function declaration
void main()
{
	sum();   // function call
	sum();
	getch();
}
void sum()   // function definition
{
	int a,b,add;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	add = a+b;
	printf("\n Addition is : %d ",add);
}
