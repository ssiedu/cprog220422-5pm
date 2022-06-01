#include<stdio.h>
#include<string.h>
void main()
{
	char str1[25];
	char str2[25];
	printf("\n Enter str1 : ");
	gets(str1);
	printf("\n Enter str2 : ");
	gets(str2);
	if(strcmp(str1,str2)==0)
	printf("\n strings are equal");
	else
	printf("\n strings are not equal");
	getch();
}
