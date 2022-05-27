#include<stdio.h>
void main()
{
	int a =10;
	int *ptr= &a;
	printf("\n value of a : %d",a);//10
	printf("\n address of a : %x",&a);
	printf("\n value of ptr : %x",ptr);
	printf("\n value of *ptr : %d",*ptr);
	getch();
}
