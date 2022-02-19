/*********************************************************************************************
 Name        : ex23.c
 Author      : Esraa  Ebrahim
 Description : Assignment 3 - Ex23
 Write a C function to find the frequency of characters in a string.
 a. Input the string from the user.
 b. Traverse the string, character by character and store the count of each of the characters in an array.
 c. Print the array that contains the frequency of all the characters
 *********************************************************************************************/
#include <stdio.h>
# define SIZE 255
void frequency_of_characters(char*str ,int*arr)
{
	int i ;
	for(i= 0;str[i] != 0 ;i++)
	{
		int  j = str[i] ;
		arr[j]++;
	}
}
int main()
{
	char str[SIZE];
	int arr[SIZE]={0};
	int i ;
	printf("Enter the string : ");
	fflush(stdin);fflush(stdout);
	gets(str);
	frequency_of_characters(str,arr);
	for(i = 0;i<SIZE ;i++)
	{
		if(arr[i] != 0)
		{
			printf("\nthe frequency of %c = %d",i,arr[i]);
		}
	}
	return 0 ;
}
