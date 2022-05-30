#include<stdio.h>
void main()
{
	int a=10;
	int *ptr;
	ptr=&a;
	printf("\n Before increment the value of ptr : %u",ptr);
	//ptr = ptr +1;
	//ptr++;
	ptr= ptr - 1; // 
	
	
	printf("\n After increment the value of ptr : %u ",ptr);
	getch();
	
}
