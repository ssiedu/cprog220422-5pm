#include<stdio.h>
void character (int s , int e);
void main()
{
    int s,e;
    printf("\n start limit : ");
    scanf("%d",&s);
    printf("\n End limit : ");
    scanf("%d",&e);
    character(s,e);
	getch();
}
void character (int s , int e)
{
	int i;
	for(i=s;i<=e;i++)
    {
     printf("\t%c",i);	
	}
}
