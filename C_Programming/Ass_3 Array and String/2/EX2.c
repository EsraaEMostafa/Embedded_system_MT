/*********************************************************************************************
 Name        : ex2.c
 Author      : Esraa  Ebrahim
 Description : Assignment 3 - Ex2
 Write a function which, given a string, return TRUE if all
 characters are distinct and FALSE if any character is repeated.
 *********************************************************************************************/

#include<stdio.h>
# define size 10
int char_distinct (char * s)
{
    int i  = 0 ,j;
	while (s[i] != 0)
	{
		for (j= i+1 ;s[j] != 0;j++)
		{
			if(s[i] == s[j])
				return 0 ;
		}
		i++ ;
	}
	return 1 ;
}
int main()
{
	char str [size] ;
	printf("Please enter the string :");
	fflush(stdin);fflush(stdout);
	scanf ("%s",str);
	int res = char_distinct(str) ;
	if (res == 1)
		printf("characters are distinct");
	else
		printf("characters are not distinct");
	return 0 ;
}
