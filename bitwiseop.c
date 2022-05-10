#include<stdio.h>
void main()
{
	int a=10 ,  b=20,c=5;
	 
	 printf("\n Bitwise AND : %d", ((a>b) & (b>c))); //0 & 1 = 0
	 
	 printf("\n Bitwise OR  : %d", ((a>b) | (b>c))); //0 | 1 =1
	 
	 printf("\n Bitwise Not : %d", ~(a>b));  // 0  = 1
	 
	 printf("\n Bitwise Xor : %d",((a>b) ^ (b>c)));  //0 ^ 1 =1
	 
	
}
