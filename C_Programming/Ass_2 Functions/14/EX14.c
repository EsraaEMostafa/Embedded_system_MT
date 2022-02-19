/*******************************************************************************************
 Name        : ex14.c
 Author      : Esraa Ebrahim
 Description : Assignment 2 - Ex 14
 Write a C Function that calculate the Fibonacci series using recursive method
 ********************************************************************************************/
#include<stdio.h>
int Fibonacci (int n)
{
	if (n == 0 || n==1)
	{
		return n ;
	}
	else
	{
		return Fibonacci(n-1)+Fibonacci(n-2);
	}
}
int main()
{
	int num ;
	printf( "Enter an integer: " );
	scanf( "%d", &num );
	printf("The Fibonacci of %d = %d" ,num ,Fibonacci(num));
}
