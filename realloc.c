#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n1,n2,i,*ptr;
	printf("\n Enter size : ");
	scanf("%d",&n1);
	ptr = (int*)malloc(n1*sizeof(int));
	printf("\n Address of previous allocate memory \n");
	for(i=0;i<n1;i++)
	{
		printf("\n%x",(ptr+i));
	}
	printf("\n Enter new size : ");
	scanf("%d",&n2);
	ptr = realloc(ptr,n2*sizeof(int));
	printf("\n Address of new allocation of memory \n");
	for(i=0;i<n2;i++)
	{
		printf("\n%x",(ptr+i));
	}
	free(ptr);
	getch();
}
