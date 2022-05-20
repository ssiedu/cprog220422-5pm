// function without argument and with return value
#include<stdio.h>
int sum();  // function declaration
void main()
{
	int res;
	res = sum();
	printf("\n  Addition is : %d ",res);
	getch();

}
int sum()
{
	int a,b;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	//c= a+b;
	return a+b;
}
