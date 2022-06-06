#include<stdio.h>
void main()
{
	FILE *fp;
	char ch[30];
	fp=fopen("file1.txt","r");
	while(fscanf(fp,"%s",ch)!=EOF)
	{
		printf("%s",ch);
	}
	fclose(fp);
}

