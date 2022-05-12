#include<stdio.h>
void main()
{
	int num;
	printf("\n Enter number : ");
	scanf("%d",&num);
	
	if(num%2==0)
	printf("\n number is divisible by 2");
	else
	printf("\n Number is not divisible by 2");
	getch();
}
