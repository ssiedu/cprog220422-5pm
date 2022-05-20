// function with argument and with return value 
#include<stdio.h>
int sum(int a, int b); // function declaration
void main()
{
	int x,y,res;
	printf("\n Enter the value of x : ");
	scanf("%d",&x);
	printf("\n Enter the value of y : ");
	scanf("%d",&y);
	res = sum(x,y);
	printf("\n Addition is : %d",res);
	getch();
}

int sum (int a , int b)
{
	return a+b;
}
