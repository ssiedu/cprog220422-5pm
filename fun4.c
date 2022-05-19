#include<stdio.h>
void square(int n);  // function declaration
void main()
{
	 int num;
	 printf("\n Enter Number : ");
	 scanf("%d",&num);
	 square(num);  // function calling
	 getch();
}
void square(int n)   // function definition
{
	int res;
	res = n*n;
	printf("\n square of %d is : %d ",n,res);
}
