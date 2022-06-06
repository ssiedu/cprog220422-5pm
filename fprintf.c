#include<stdio.h>
void main()
{
	FILE *fp;
	fp = fopen("file1.txt","w");
	fprintf(fp,"Welcome to ssi digital");
	fclose(fp);
}
