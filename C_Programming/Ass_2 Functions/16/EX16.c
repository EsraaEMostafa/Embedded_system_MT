/*******************************************************************************************
 Name        : ex16.c
 Author      : Esraa Ebrahim
 Description : Assignment 2 - Ex 16
  Write a C function to count the number of 1’s in an unsigned 8-bit integer
 ********************************************************************************************/
#include<stdio.h>
char count (unsigned char n)
{
	char c = 0;
	for(char i = 0;i<8;i++)
	{
		if(((n>>i)&(1))==1)
		{
			c++ ;
		}
	}
	return c ;
}
int main()
{
	unsigned char num ;
	printf("PLeaes enter a number :");
	scanf("%d",&num);
	printf ("the number of 1’s in %d = %d",num ,count(num));
	return 0 ;
}
