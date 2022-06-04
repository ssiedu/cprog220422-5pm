#include<stdio.h>
#include<string.h>
typedef struct person
{
	int id;
	char name[25];
}p;

void main()
{
	p p1;
	p1.id = 101;
	strcpy(p1.name,"Ram");
	printf("\n Person id : %d\n",p1.id);
	printf("\n Person name : %s\n",p1.name);
	getch();
}
