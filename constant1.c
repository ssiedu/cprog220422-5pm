#include<stdio.h>
#define pi 3.14
void main()
{
	float area,radius;
	printf("\n Enter radius : ");
	scanf("%f",&radius);
	area = pi*radius*radius;
	printf("\n area of circle : %.2f",area);
	getch();
}
