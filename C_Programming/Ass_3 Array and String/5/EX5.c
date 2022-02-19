/*********************************************************************************************
 Name        : ex5.c
 Author      : Esraa  Ebrahim
 Description : Assignment 3 - Ex5
 Write a C function to return the index of FIRST occurrence of a number in a given array.
 Array index start from 0. If the item is not in the list return -1. (Linear Search Algorithm)
 *********************************************************************************************/
#include <stdio.h>
# define SIZE 5
int Linear_Search_first(int s , int *arr ,int n)
{
	int i ;
	for(i=0;i<s;i++)
	{
		if (n == arr[i])
			return i ;
	}
	return -1 ;
}
int main()
{
	int arr [SIZE] ;
	int i ,element;
	printf ("Enter the elements of the array : ");
	fflush(stdin);fflush(stdout);
	for (i =0 ;i<SIZE ;i++)
	{
		scanf ("%d", &arr[i]);
	}
	printf("Enter element for search: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&element);
	int loc = Linear_Search_first(SIZE ,arr,element);
	if(loc == -1)
	{
		printf("The element not found");
	}
	else
	{
		printf("The element at the location: %d",loc);
	}
	return 0 ;
}
