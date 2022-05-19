#include<stdio.h>
void main()
{
	int i;
	for(i=1;i<10;i++)
	{
		if(i>5)
		goto xyz;//continue;//break;
		printf("\n%d",i);
	}
	xyz: printf("\n We use goto statement ");
	getch();
}
