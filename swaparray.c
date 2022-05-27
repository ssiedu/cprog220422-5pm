#include<stdio.h>
void main()
{
	int a[3][3],b[3][3],temp[3][3];
	int r,c,i,j;
	printf("\n Enter row : ");
	scanf("%d",&r);
	printf("\n Enter column : ");
	scanf("%d",&c);
	
	printf("\n Enter elements of first matrix : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	 
	printf("\n Enter elements of second matrix : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n After Swapping : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			a[i][j] = a[i][j]+ b[i][j];
			b[i][j] = a[i][j]- b[i][j];
			a[i][j] = a[i][j]- b[i][j];
			/*temp[i][j] = a[i][j];
			a[i][j]   = b[i][j];
			b[i][j]   = temp[i][j];*/
		}
	}
	
	printf("\n first matrix is : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n\n");
	}
	printf("\n Second matrix : \n ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",b[i][j]);
		}
		printf("\n\n");
	}	
	
}
