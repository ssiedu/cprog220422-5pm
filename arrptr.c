#include<stdio.h>
void main()
{
	int a[5] = {10,20,30,40,50};
	int *ptr;
	int i;
	ptr = &a;
	printf("\n Element of array :\n");
	for(i=0;i<5;i++)
	{
		printf("\n%d",*(ptr+i));
	}
	getch();	
}
