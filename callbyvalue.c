#include<stdio.h>
void exchange(int a , int b); // function declaration
void main()
{
	int x,y;
	printf("\n Enter the value of x : ");
	scanf("%d",&x);
	printf("\n Enter the value of y : ");
	scanf("%d",&y);
	printf("\n Before swapping \n value of x : %d \n value of y : %d",x,y);
	exchange(x,y); // call by value
	printf("\n After swapping \n value of x : %d \n value of y : %d",x,y);
	getch();
}
void exchange (int a, int b)
{
	a = a+b;
	b = a-b;
	a = a-b;
	printf("\n the value of a : %d ",a);
	printf("\n the value of b : %d ",b);
}
