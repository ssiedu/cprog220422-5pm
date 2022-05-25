#include<stdio.h>
void main()
{
	int arr[25];
	int n,i;
	printf("\n Enter Array size : ");
	scanf("%d",&n);
	printf("\n Enter array elements :\n");
	for(i=0;i<n;i++)
	{
		printf("\n element arr[%d] : ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[0]<arr[i])
		arr[0] = arr[i];
	}
	printf("\n largest element of array : %d",arr[0]);
	getch();
	
	
}
