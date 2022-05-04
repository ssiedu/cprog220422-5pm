#include<stdio.h>
void main()
{
	float radius,area;
	const float pi=3.14;
	printf("\n Enter radius : ");
	scanf("%f",&radius);
	area = pi*radius*radius;
	printf("\n area of circle is : %.2f",area);
	getch();
	
}
