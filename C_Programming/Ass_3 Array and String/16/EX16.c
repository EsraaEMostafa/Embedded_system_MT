/*********************************************************************************************
 Name        : ex16.c
 Author      : Esraa  Ebrahim
 Description : Assignment 3 - Ex16
 Write a C function that takes an array as input and reverse it
 *********************************************************************************************/
#include <stdio.h>
# define SIZE 6
void reverse_arr(int *arr ,int s)
{
	int i ;
	for (i=0;i<s/2 ;i++)
	{
		int temp =arr[i];
		arr[i]=arr[s-i-1];
		arr[s-i-1] = temp ;
	}
}
int main()
{
	int arr[SIZE] = {1,2,3,4,5,6};
	int i ;
	printf ("Array before the reverse : ");
	for(i=0;i<SIZE;i++)
	{
		printf("%d\t",arr[i]);
	}
	reverse_arr(arr,SIZE);
	printf ("\nArray after the reverse  : ");
	for(i=0;i<SIZE;i++)
	{
		printf("%d\t",arr[i]);
	}

	return 0 ;
}
