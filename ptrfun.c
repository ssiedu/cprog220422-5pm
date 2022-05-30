#include<stdio.h>
int mul(int a , int b);
void main()
{
	int res,a=10,b=20;
	int (*ptr)(int,int);
	ptr = &mul;
	
	res = (*ptr)(a,b);
	printf("\n result is : %d",res);
	getch();
}

int mul(int a , int b)
{
	/*int a,b;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);*/
	return a+b;
}
