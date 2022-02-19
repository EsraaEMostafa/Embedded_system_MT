/*********************************************************************************************
 Name        : ex8.c
 Author      : Esraa  Ebrahim
 Description : Assignment 3 - Ex8
 Write a program that computes the nth term of the geometric series: 1, 3, 9, 27, …
 Run the program to compute the 10th term of the given series
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
		arr[i]=arr[i-1]*3 ;
	}
	printf("Please enter the element index : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&elem);
	printf("The %dth term is : %d",elem,arr[elem-1]);
	return 0 ;
}
