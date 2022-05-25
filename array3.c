#include<stdio.h>
void main()
{
	int a[20];
	int i,j,n,temp;
	printf("\n Enter array size : ");
	scanf("%d",&n);
	printf("\n Enter Array Elements : \n");
	for(i=0;i<n;i++)
	{
		printf("\n Element a[%d] : ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n sorted array : \n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;	
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	getch();
}
