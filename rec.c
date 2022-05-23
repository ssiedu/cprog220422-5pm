#include<stdio.h>
int fact(int n);
void main()
{
	int num,f;
	printf("\n Enter Number : ");
	scanf("%d",&num);
	f = fact(num);
	printf("\n factorial is : %d ",f);
}
int fact(int n)
{
	if(n==0)
	return 1;
	else
	return n*fact(n-1);//5*4*3*2*1=120
}
