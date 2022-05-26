#include<stdio.h>
void main()
{
	int a[5][5],b[5][5],mul[5][5];
	int r,c,i,j,k;
	
	printf("\n Enter row : ");
	scanf("%d",&r);
	printf("\n Enter column : ");
	scanf("%d",&c);
	
	printf("\n Enter first matrix element :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n Enter Second matrix element :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			mul[i][j]=0;
			for(k=0;k<c;k++)
			{
				mul[i][j] = mul[i][j] + a[i][k] * b[k][j];
			}
		}
	}
	
	printf("\n Matrix Multiplication is : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",mul[i][j]);
		}
		printf("\n\n");
	}
	
	
}
