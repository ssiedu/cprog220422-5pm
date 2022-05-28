#include<stdio.h>
void main()
{
	int *iptr;
	float *fptr;
	char *cptr;
	void *ptr;
	
	printf("\n size of integer pointer   : %d ",sizeof(iptr));
	printf("\n size of float pointer     : %d",sizeof(fptr));
	printf("\n size of character pointer : %d ",sizeof(cptr));
	printf("\n size of void pointer      : %d",sizeof(ptr));
	getch();
}
