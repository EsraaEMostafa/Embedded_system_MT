/*********************************************************************************************
 Name        : ex18.c
 Author      : Esraa  Ebrahim
 Description : Assignment 3 - Ex18
 Write a C function that return the count of the longest consecutive occurrence of
 a given number in an array
 Example:
 Array={1,2,2,3,3,3,3,4,4,4,4,3,3,3} and searching for 3 , result = 4
 *********************************************************************************************/
#include <stdio.h>
# define SIZE 15
int  longest_consecutive_occurrence (int*arr , int s, int num)
{
	int i;
	int max = 0 , count = 0;
	for(i=0;i<s;i++)
	{
		if(arr[i] == num )
		{
			count++ ;
			if(count > max )
			{
				max = count ;
			}
		}
		else
		{
			count = 0;
		}
	}
	return max ;
}
int main()
{
	int arr[SIZE] = {1,2,2,3,3,3,3,4,4,4,4,3,3,3} ;
	int res= longest_consecutive_occurrence(arr,SIZE,3) ;
	printf("the longest consecutive occurrence of %d = %d",3,res);
	return 0 ;
}
