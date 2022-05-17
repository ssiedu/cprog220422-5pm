#include<stdio.h>
void main()
{
	int ch;
	printf("\n Enter your choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1 : printf("\n One ");
				 break;
		case 2 : printf("\n Two ");
				 break;
		case 3 : printf("\n Three ");
				 break;
		case 4 : printf("\n Four ");
				 break;
		default : printf("\n Invalid choice ");
				  break;
	}
	getch();
}
