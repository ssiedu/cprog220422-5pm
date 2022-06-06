#include<stdio.h>
void main()
{
	FILE *fp;
	char ch;
	fp=fopen("filehandle.c","r");
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		break;
		printf("%c",ch);
	}
	fclose(fp);
	getch();
}
