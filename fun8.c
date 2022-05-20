#include<stdio.h>
float avg(float a , float b); // function declaration
void main()
{
	float x,y,res;
	printf("\n Enter the value of x : ");
	scanf("%f",&x);
	printf("\n Enter the value of y : ");
	scanf("%f",&y);
	res = avg(x,y);
	printf("\n average of value : %.2f",res);
	getch();
}

float avg(float a , float b)
{
	return (a+b)/2;
}
