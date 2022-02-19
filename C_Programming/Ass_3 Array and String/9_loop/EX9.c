/*********************************************************************************************
 Name        : ex9.c
 Author      : Esraa  Ebrahim
 Description : Assignment 3 - Ex9
 The sequence of numbers 1, 1, 2, 3, 5, 8, 13, … is called Fibonacci numbers; each is
 the sum of the preceding 2. Write a program which given n, returns the nth Fibonacci number.
 with for/while
 *********************************************************************************************/
#include <stdio.h>
#define SIZE 100
int main()
{
	int arr[SIZE] ;
	int elem , i;
	arr[0]=1;
	arr[1]=1;
	for(i=2;i<SIZE;i++)
	{
		arr[i]=arr[i-1]+arr[i-2] ;
	}
	printf("Please enter the element index : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&elem);
	printf("The %dth term is : %d",elem,arr[elem-1]);
	return 0 ;
}

