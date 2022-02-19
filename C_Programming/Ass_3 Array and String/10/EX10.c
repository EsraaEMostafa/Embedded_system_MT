/*********************************************************************************************
 Name        : ex10.c
 Author      : Esraa  Ebrahim
 Description : Assignment 3 - Ex10
 Write a function which, given a string, converts all uppercase
 letters to lowercase, leaving the others unchanged
 *********************************************************************************************/
#include <stdio.h>
# define SIZE 20
void convert_utol(char *str)
{
	int i=0 ;
	while (str[i] != 0)
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i]+32;
		}
		i++ ;
	}
}
int main()
{
	char str [SIZE];
	printf("enter the string : ");
	fflush(stdin);fflush(stdout);
	gets(str);
	convert_utol(str);
	printf("the string after the conversion : ");
	puts(str);
	return 0 ;
}
