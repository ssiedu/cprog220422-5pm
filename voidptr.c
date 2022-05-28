#include<stdio.h>
void main()
{
	int i=10;
	float f=12.3;
	char c = 'a';
	
	void *ptr;
	
	ptr = &i;
	printf("\n value of i : %d \n value of ptr : %d",i,*(int*)ptr);
	
	ptr=&f;
	printf("\n value of f : %f \n value of ptr : %f",f,*(float*)ptr);
	
	ptr = &c;
	printf("\n value of c : %c \n value of ptr : %c",c,*(char*)ptr);
	getch();
}
