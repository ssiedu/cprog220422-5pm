#include<stdio.h>
void main()
{
	int i,n,s;
	printf("\n Enter start limit : ");
	scanf("%d",&s);
	printf("\n Enter end Limit : ");
	scanf("%d",&n);
	
	printf("\n Numbers are : \n");
	for(i=s;i<=n;i++)
	{
		printf("\t%d",i);
	}
	getch();
}
