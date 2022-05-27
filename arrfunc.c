#include<stdio.h>
void getarr(int arr[]); // function declaration
void main()
{
	int arr[5] = {10,20,30,40,50};
	getarr(arr);
	getch();
}
void getarr(int arr[])
{
	int i;
	printf("\n Array elements : \n");
	for(i=0;i<5;i++)
	{
		printf("\t%d",arr[i]);
	}
	
}
