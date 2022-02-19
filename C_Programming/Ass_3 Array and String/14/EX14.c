/*********************************************************************************************
 Name        : ex14.c
 Author      : Esraa  Ebrahim
 Description : Assignment 3 - Ex14
 Write a function to reverse a string by passing it to a function.
 *********************************************************************************************/
#include <stdio.h>
#include <string.h>
# define SIZE 20
void reverse_str(char*str)
{
	int i =0 ;
	int len = strlen(str);
	for(i = 0;i<len/2 ;i++)
	{
		char temp =str[i];
		str[i] = str[len-i-1];
		str[len-i-1] = temp;
	}
}
int main()
{
	char str [SIZE];
	printf("Enter a string :");
	fflush(stdin);fflush(stdout);
	gets(str);
	reverse_str(str);
	puts(str);
	return 0 ;
}
