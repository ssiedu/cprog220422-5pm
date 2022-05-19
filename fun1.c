// function without argument and without return value
#include<stdio.h>
void hello();   // function declaration
void main()
{
	hello();    // function call
	hello();
	hello();
	hello();
	getch();
}
void hello()   // function definition
{
	printf("\n Welcome to ssi digital academy ");
	printf("\n Welcome to C/C++ classes ");
}
