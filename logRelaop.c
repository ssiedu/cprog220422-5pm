#include<stdio.h>
void main()
{
	int a=5, b=7 , c=10;
	
	printf("\n Logical AND : %d",((a>b)&&(a>c)));  //0&&0 = 0
	
	printf("\n Logical OR  : %d",((b>a)||(c>a)));  //1&&1  =1
	
	printf("\n Logical NOT : %d", (!(c<a)));  //1
	
}
