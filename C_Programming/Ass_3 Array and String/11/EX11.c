/*********************************************************************************************
 Name        : ex11.c
 Author      : Esraa  Ebrahim
 Description : Assignment 3 - Ex11
 Write a function that prints the frequency of a certain character in a string.
 *********************************************************************************************/
#include <stdio.h>
#define SIZE 100
int frequency(char *str ,char ch)
{
	int freq = 0 , i = 0 ;
	while (str[i] != 0)
	{
		if(ch == str[i])
		{
			freq++ ;
		}
		i++ ;
	}
	return freq ;
}
int main()
{
	char str [SIZE];
	char elem ;
	printf("enter the string : ");
	fflush(stdin);fflush(stdout);
	gets(str);
	printf("enter the character : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&elem);
	int res =frequency(str,elem);
	printf("Frequency of %c = %d", elem, res);
	return 0 ;
}
