/*********************************************************************************************
 Name        : ex7.c
 Author      : Esraa  Ebrahim
 Description : Assignment 3 - Ex7
 Write a program that computes the nth term of the arithmetic series: 1, 3, 5, 7, 9, …
 Run the program to compute the 100th term of the given series.
 *********************************************************************************************/
#include <stdio.h>
#define SIZE 100
int main()
{
	int arr[SIZE] ;
	int elem , i;
	arr[0]=1;
	for(i=1;i<SIZE;i++)
	{
		arr[i]=arr[i-1]+2 ;
	}
	printf("Please enter the element index : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&elem);
	printf("The %dth term is : %d",elem,arr[elem-1]);
	return 0 ;
}
