#include<stdio.h>
int a = 50;
void main()
{
	int a=10;
	{
		int a=5;
		printf("\n With a block the value of a : %d",a);
	}
	printf("\n in a main function the value of a : %d",a);
	getch();
}
