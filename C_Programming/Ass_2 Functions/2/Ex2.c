/*******************************************************************************************
 Name        : ex2.c
 Author      : Esraa Ebrahim
 Description : Assignment 2 - Ex 2
 Write a C Function that takes one character and checks if it alphabet or not
 ********************************************************************************************/

#include <stdio.h>

void check(char ch)
{
	if ((ch >= 'a'&& ch <= 'z')||(ch >= 'A'&& ch <= 'Z'))
		printf("\nthe character is alphabet");
	else
		printf("\nthe character is not alphabet");
}

int main()
{
	char c ;
	printf("please enter a character: ");
	scanf("%c",&c);
    check(c);
}
