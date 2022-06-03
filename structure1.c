#include<stdio.h>
#include<string.h>
struct student
{
	int rollno;
	char name[25];
	float marks;
}s;
void main()
{
	//struct student s;
	s.rollno = 101;
	strcpy(s.name," Ram");
	s.marks = 75.54;
	
	printf("\n student roll no : %d",s.rollno);
	printf("\n student name    : %s",s.name);
	printf("\n student marks   : %.2f",s.marks);
	getch();
}
