#include<stdio.h>
void main()
{
	int arr[30];
	int i,n;
	printf("\n how many elements u want to enter : ");
	scanf("%d",&n);
	printf("\n Enter array elements : \n");
	for(i=0;i<n;i++)
	{
		printf("\n element arr[%d] : ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\n arr[%d] : %d",i+1,arr[i]);
	}
	
	getch();
}
