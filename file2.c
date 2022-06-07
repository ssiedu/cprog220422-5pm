#include<stdio.h>
void main()
{
	FILE *fp;
	char c;
	fp=fopen("file2.txt","w");
	fputc('a',fp);
	fclose(fp);
	fp=fopen("file2.txt","r");
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);
		
	}
	fclose(fp);
	getch();
}
