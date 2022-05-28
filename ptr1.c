#include<stdio.h>
void main()
{
	int num =20;
	int *ptr = &num;
	int **pptr = &ptr;
	int ***ppptr = &pptr;
	int ****pppptr = &ppptr;
	
	printf("\n Num is : %d",num);
	printf("\n ptr is : %d",*ptr);
	printf("\n pptr is : %d",**pptr);
	printf("\n ppptr is : %d",***ppptr);
	printf("\n pppptr is : %d",****pppptr);
	getch();
}
