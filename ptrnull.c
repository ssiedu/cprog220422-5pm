#include<stdio.h>
void main()
{
	int num=50;
	int num1=60;
	int *ptr=NULL;
	if(ptr == NULL)
	{
		ptr=&num;
		printf("\n value of ptr :%d",*ptr);
	}
	if(ptr == NULL)
	{
		ptr=&num1;
		printf("\n value of ptr : %d",*ptr);
	}
	else
	{
		printf("\n value of ptr ");
	}	
		
	getch();
	
}
