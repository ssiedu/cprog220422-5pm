//function with argument and without return value
#include<stdio.h>
void sum(int a, int b); // function declaration
void main()
{
	int x,y;
	printf("\n Enter the value of x : ");
	scanf("%d",&x);
	printf("\n Enter the value of y : ");
	scanf("%d",&y);
	sum(x,y);      // function call
	getch();
}
void sum(int a, int b )// function definition
{
	int res;
	res = a+b;
	printf("\n value of a : %d",a);
	printf("\n value of b : %d",b);
	printf("\n Addition is : %d",res);
}
