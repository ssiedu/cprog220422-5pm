#include<stdio.h>
#include<string.h>
void main()
{
	char str[25];
	int len;
	printf("\n Enter string : ");
	gets(str);
	len = strlen(str);
	printf("\n string length is : %d",len);
	getch();
	
}
