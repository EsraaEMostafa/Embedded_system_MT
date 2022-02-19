/*********************************************************************************************
 Name        : ex19.c
 Author      : Esraa  Ebrahim
 Description : Assignment 3 - Ex19
 Write a C function that compare between 2 arrays with the same length.
 It shall return 0 if the two arrays are identical and 1 if not
 *********************************************************************************************/
#include <stdio.h>
# define SIZE 5
int compare(int *a1 ,int*a2 ,int s)
{
	int i  ;
	for(i=0;i<s;i++)
	{
		if (a1[i] != a2[i])
		{
			return 1;
		}
	}
	return 0 ;
}
int main()
{
	int arr1[SIZE] = {5,6,7,8,9} ;
	int arr2[SIZE] = {5,6,7,8,9} ;
	int res = compare(arr1,arr2,SIZE);
	if(res == 0)
	{
		printf("the two arrays are identical");
	}
	else
	{
		printf("the two arrays are not identical");
	}
	return 0 ;
}
