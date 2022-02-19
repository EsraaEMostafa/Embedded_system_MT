/*********************************************************************************************
 Name        : ex3.c
 Author      : Esraa  Ebrahim
 Description : Assignment 3 - Ex3
 Write a C function that use the bubble sort algorithm to sort an integer array in ascending order
 *********************************************************************************************/

#include<stdio.h>
# define SIZE 6
void bubble_sort(int size , int * arr)
{
	int i ,j ;
	for (i =0 ; i< size-1 ;i++)
	{
		for (j = 0 ; j<size-i-1 ;j ++)
		{
			if (arr[j] > arr[j+1])
			{
				int temp =arr[j];
				arr[j] = arr[j+1] ;
				arr[j+1] =temp ;
			}
		}
	}
}
int main()
{
	int arr [SIZE] ={5 ,7,2,9 ,4,8} ;
	int i ;
	printf ("the array before arrangement : ");
	for (i =0 ;i<SIZE ;i++)
	{
		printf ("%d\t", arr[i]);
	}
	bubble_sort(SIZE , arr) ;
	printf ("\nthe array after arrangement  : ");
	for (i =0 ;i<SIZE ;i++)
	{
		printf ("%d\t", arr[i]);
	}
	return 0 ;
}
