/*********************************************************************************************
 Name        : ex22.c
 Author      : Esraa  Ebrahim
 Description : Assignment 3 - Ex22
 Write a c function that removes the repeated number of an input sorted array and return a new
 array without the repeated numbers. The function shall return error if the size of the input
 array is ZERO. The function takes four inputs:
 a. Old array.
 b. Old array size.
 c. New array (empty array).
 d. The size of the new array after fill it in the function.
 int removeDuplicates(int arr_old[], int n_old, int arr_new[], int*n_new)
 Example:
 arr1 = {1,2,3,3,3,4,4,5,5,5} ,arr2 = {1,2,3,4,5}
 *********************************************************************************************/
#include <stdio.h>
#define SIZE 10
#define ERROR 0
#define SUCCESS 1
int removeDuplicates(int arr_old[], int n_old, int arr_new[], int*n_new)
{
	int i ;
	if(n_old == 0)
	{
		return ERROR ;
	}
	else
	{
		for(i= 0;i<n_old-1;i++)
		{
			if(arr_old[i] != arr_old[i+1])
			{
				arr_new[(*n_new)]= arr_old[i];
				(*n_new)++ ;
			}
		}
		arr_new[(*n_new)]= arr_old[i];
		(*n_new)++ ;
	}
	return  SUCCESS ;

}
int main()
{
	int arr1[SIZE] = {1,2,3,3,3,4,4,5,5,5} ;
	int arr2[SIZE] ;
	int n_size=0 ;
	int i ;
	int res = removeDuplicates(arr1,SIZE,arr2,&n_size) ;
	if(res == SUCCESS)
	{
		for(i=0;i<n_size;i++)
		{
			printf("%d  ",arr2[i]);
		}
	}
	return 0 ;
}
