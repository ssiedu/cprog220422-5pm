#include<stdio.h>
void main()
{
	char str[11] = "Ssidigital";
	int i=0;
	int count=0;
	while(i<11)
	{
		if(str[i]=='a' || str[i]=='e'|| str[i]=='i' || str[i]=='o'|| str[i]=='u')
		{
			count++;
		}
		i++;
	}
	printf("\n Number of vowels : %d",count);
	getch();
}
