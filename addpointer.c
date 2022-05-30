#include<stdio.h>
void main()
{
	int num=30;
	int *ptr;
	ptr = &num;
	printf("\n before addition the value of ptr : %u ",ptr);
	
	//ptr = ptr+3;
	
	ptr = ptr -4;
	
	printf("\n After addition the value of ptr : %u",ptr);
	getch();
}
