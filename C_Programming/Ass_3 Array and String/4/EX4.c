/*********************************************************************************************
 Name        : ex4.c
 Author      : Esraa  Ebrahim
 Description : Assignment 3 - Ex 4
 Write a C function that use the selection sort algorithm to sort
 an integer array in ascending order
 *********************************************************************************************/

#include<stdio.h>
# define SIZE 6
void selection_sort(int size , int * arr)
{
	int i ,j , min ;
	for (i =0 ; i< size-1 ;i++)
	{
		min = i;
		for (j = i+1; j<size ;j ++)
		{
			if (arr[min] > arr[j])
			{
				min = j ;
			}
		}
		int temp =arr[i];
		arr[i] = arr[min] ;
		arr[min] =temp ;
	}
}
int main()
{
	int arr [SIZE] ={5,7,2,9,4,8} ;
	int i ;
	printf ("the array before arrangement : ");

	for (i =0 ;i<SIZE ;i++)
	{
		printf ("%d\t", arr[i]);
	}

	selection_sort(SIZE , arr) ;

	printf ("\nthe array after arrangement  : ");

	for (i =0 ;i<SIZE ;i++)
	{
		printf ("%d\t", arr[i]);
	}
	return 0 ;
}
