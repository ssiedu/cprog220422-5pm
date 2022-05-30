#include<stdio.h>
int add (int , int);
int sub (int , int);
int mul (int , int);
int div (int , int);
void main()
{
	int res,a=20,b=10;
	int (*fp[4])(int,int);
	
	fp[0] = &add;
	fp[1] = &sub;
	fp[2] = &mul;
	fp[3] = &div;
	
	res = (*fp[0])(a,b);
	printf("\n Addition is : %d",res);
	
	res = (*fp[1])(a,b);
	printf("\n Substraction is : %d",res);
	
	res = (*fp[2])(a,b);
	printf("\n Multiplication is : %d",res);
	
	res = (*fp[3])(a,b);
	printf("\n Division is : %d",res);
	
	getch();
}

int add (int a, int b)
{
	return a+b;
}
int sub ( int a, int b)
{
	return a-b;
}
int mul(int a, int b)
{
	return a*b;
}
int div(int a, int b)
{
	return a/b;
}




