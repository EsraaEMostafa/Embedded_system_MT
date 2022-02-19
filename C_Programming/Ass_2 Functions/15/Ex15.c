/*******************************************************************************************
 Name        : ex15.c
 Author      : Esraa Ebrahim
 Description : Assignment 2 - Ex 15
 Write a C function to count the number of 1’s in an unsigned 32-bit integer
 ********************************************************************************************/
#include<stdio.h>
int count (unsigned int n)
{
	int c = 0;
	for(int i = 0;i<32;i++)
	{
		if(((n>>i)&(1))==1)
		{
			c++ ;
		}
	}
	return c ;
}
int main ()
{
	unsigned int num ;
	printf("PLeaes enter a number :");
	scanf("%d",&num);
	printf ("the number of 1’s in %d = %d",num ,count(num));
	return 0 ;
}
