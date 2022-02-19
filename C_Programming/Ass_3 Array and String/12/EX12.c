/*********************************************************************************************
 Name        : ex12.c
 Author      : Esraa  Ebrahim
 Description : Assignment 3 - Ex12
 Write a function to find the length of a string.
 *********************************************************************************************/
#include <stdio.h>
# define SIZE 100
int lenght_str (char*str)
{
	int i = 0;
	while(str[i] != 0)
	{
		i++;
	}
	return i;
}
int main()
{
	char str [SIZE];
	printf("enter the string : ");
	fflush(stdin);fflush(stdout);
	gets(str);
	int len = lenght_str(str);
	printf("the length of the string : %d",len);
	return 0 ;
}
