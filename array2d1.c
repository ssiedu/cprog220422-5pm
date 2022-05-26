#include<stdio.h>
void main()
{
	int a[2][3]={{1,2,3},{4,5,6}};
	int i,j;
	printf("\n Matrix is : \n\n\n");
	for(i=0;i<2;i++){
		printf("\t\t");
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n\n");
	}
	getch();
	
}
