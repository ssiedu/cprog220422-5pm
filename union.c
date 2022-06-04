#include<stdio.h>
union Data
{
	int i;
	//float f;
	char str[25];
	float f;
};
void main()
{
	union Data d;
	printf("\n size of union : %d ",sizeof(d));
	getch();
}
