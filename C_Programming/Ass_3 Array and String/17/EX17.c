/*********************************************************************************************
 Name        : ex17.c
 Author      : Esraa  Ebrahim
 Description : Assignment 3 - Ex17
 Write a C Program for swapping two arrays “A & B” with different lengths.
 B will be always the smallest array. int * Swap (int a_size,int *a,int b_size,int *b)
 *********************************************************************************************/
#include <stdio.h>

int * Swap (int a_size,int *a,int b_size,int *b)
{
	int i ;
	for(i=0 ;i<b_size;i++)
	{
		int temp = a[i];
		a[i]= b[i];
		b[i] =temp;
	}
	return a ;
}
int main()
{
	int a[5] ={6,7,8,9,10};
	int b[5] ={1,2,3,4,5};
	int i ;
	printf("Array1 before the swap : ");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nArray2 before the swap : ");
	for(i=0;i<5;i++)
	{
		printf("%d\t",b[i]);
	}
	Swap(5,a,5,b);
	printf("\nArray1 after the swap  : ");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nArray2 after the swap  : ");
	for(i=0;i<5;i++)
	{
		printf("%d\t",b[i]);
	}
	return 0 ;
}
