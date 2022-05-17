#include<stdio.h>
void main()
{
	int i,n;
	printf("\n Enter Limit : ");
	scanf("%d",&n);
	i=1;
	do
	{
		printf("\t%d",i);
		i++;
	}while(i<=n);
	
	getch();
}
