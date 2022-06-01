#include<stdio.h>
#include<string.h>
void main()
{
	char str1[25];
	
	printf("\n Enter str1 : ");
	gets(str1);
	
	printf("\n str2 is : %s",strupr(str1));
	
	getch();
}
