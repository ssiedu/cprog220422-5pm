#include<stdio.h>
void main()
{
	int a[5][5],b[5][5],sum[5][5];
	int r,c,i,j;
	
	printf("\n Enter the size of row : ");
	scanf("%d",&r);
	printf("\n Enter the size of column : ");
	scanf("%d",&c);
	
	printf("\n Enter first matrix elements : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n Enter second matrix elements : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	/* sum of matrix */
	printf("\n Sum of matrix is : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",sum[i][j]);
		}
		printf("\n\n");
	}
	getch();
	
}
