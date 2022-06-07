#include<stdio.h>
void main()
{
	FILE *fp;
	int len;
	fp=fopen("file4.txt","r");
	fseek(fp,0,SEEK_END);
	len = ftell(fp);
	fclose(fp);
	printf("\n length of file %d bytes ",len);
	getch();
}
