#include<stdio.h>
void main()
{
	FILE *fp;
	char text[255];
	fp=fopen("file3.txt","w");
	fputs("Welcome to SSi Digital Academy",fp);
	fclose(fp);
	fp=fopen("file3.txt","r");
	printf("%s",fgets(text,100,fp));
	fclose(fp);
	getch();
}
