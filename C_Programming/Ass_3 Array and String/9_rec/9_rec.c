/*********************************************************************************************
 Name        : ex9.c
 Author      : Esraa  Ebrahim
 Description : Assignment 3 - Ex9
 The sequence of numbers 1, 1, 2, 3, 5, 8, 13, … is called Fibonacci numbers; each is
 the sum of the preceding 2. Write a program which given n, returns the nth Fibonacci number.
 with recursion
 *********************************************************************************************/
#include <stdio.h>
#define SIZE 100
int Fibonacci(int n)
{
	int f;
	if(n==0 || n==1)
	{
		return n;
	}
	else
	{
		f= Fibonacci(n-1)+Fibonacci(n-2);
	}
	return f;
}
int main()
{
	int elem ;
	printf("Please enter the element index : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&elem);
	printf("The %dth term is : %d",elem,Fibonacci(elem));
	return 0 ;
}
