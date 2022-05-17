#include<stdio.h>
void main()
{
	int num1,num2,ch,res;
	printf("\n Enter First Number : ");
	scanf("%d",&num1);
	printf("\n Enter Second Number : ");
	scanf("%d",&num2);
	printf("\n 1. Add \n 2. Sub \n 3. Mul \n 4. Div \n 5. Mod");
	printf("\n Enter your choice : ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1 : res = num1+num2;
				 printf("\n Addition is : %d ",res);
				 break;
		case 2 : res = num1-num2;
				 printf("\n Substraction is : %d ",res);
				 break;
		case 3 : res = num1*num2;
				 printf("\n Multiplication is : %d ",res);
				 break;
		case 4 : res = num1/num2;
				 printf("\n Division is : %d ",res);
				 break;
		case 5 : res = num1 % num2;
				 printf("\n Modulus is : %d ",res);
				 break;
		default : printf("\n Invalid choice ");
				  break;
	}
	getch();
}
