#include<stdio.h>
int cube(); // function declaration
void main()
{
	int res;
	res = cube();   // function calling
	printf("\n cube of value : %d ",res);
	getch();
}

int cube()
{
	int num;
	printf("\n Enter Number : ");
	scanf("%d",&num);
	return num*num*num;
}
