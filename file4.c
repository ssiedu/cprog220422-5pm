#include<stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("file4.txt","w+");
	fputs("This is a pen",fp);
	fseek(fp,8,SEEK_SET);
	fputs("SSI Digital Academy",fp);
	fclose(fp);
	getch();
}
