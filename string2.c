#include<stdio.h>
void main()
{
	char str[25];
	printf("\n Enter string : ");
	scanf("%[^\n]s",str);
	printf("\n string is : %s",str);
	getch();
}
