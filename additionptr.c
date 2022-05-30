#include<stdio.h>
void main()
{
	int a=10;
	int b=20;
	int *ptr1 = &a;
	int *ptr2 = &b;
	
	printf("\n Before addition ptr1 is : %u",ptr1);
	printf("\n Before addition ptr2 is : %u",ptr2);
	
	ptr1 = ptr1-ptr2;
	
	printf("\n Aftetr add address ptr1 is : %u",ptr1);
	getch();
	
	
}
