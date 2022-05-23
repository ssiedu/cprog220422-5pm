#include<stdio.h>
void exchange(int *x, int *y);
void main()
{
	int x,y;
	printf("\n Enter the value of x : ");
	scanf("%d",&x);
	printf("\n Enter the value of y : ");
	scanf("%d",&y);
	printf("\n Before swapping \n value of x : %d \n value of y : %d",x,y);
	exchange(&x,&y);
	printf("\n After swapping \n value of x : %d \n value of y : %d",x,y);	
}
void exchange (int *x , int *y)
{
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
	printf("\n x : %d \n y : %d ",*x,*y);	
}
