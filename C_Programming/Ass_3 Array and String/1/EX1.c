/*********************************************************************************************
 Name        : ex1.c
 Author      : Esraa  Ebrahim
 Description : Assignment 3 - Ex 1
 Complete the function summation. The function must return the integer sum of the numbers array.
 int summation(int numbers_size, int* numbers)
 *********************************************************************************************/
#include<stdio.h>
# define array_size 4
int summation(int numbers_size, int* numbers)
{
	int i , sum =0;
	for(i =0 ;i<numbers_size ;i++)
	{
		sum += numbers[i] ;
	}
	return sum ;
}
int main()
{
    int arr[array_size] ;
    int i ;
    printf("Please enter the element of the array :");
    fflush(stdin);fflush(stdout);
    for (i= 0;i<array_size;i++)
    {
    	scanf("%d",&arr[i]);
    }
    int sum = summation (array_size , arr);
    printf ("The Sum of the array elements : %d",sum);
	return 0 ;
}

