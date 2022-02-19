/*******************************************************************************************
 Name        : ex61.c
 Author      : Esraa Ebrahim
 Description : Assignment 2 - Ex6
 Write C Function that converts the any letter from lowercase to uppercase
 ********************************************************************************************/
#include<stdio.h>
void convert (char c)
{
	if (c >= 'a' && c <='z')
		printf("Capital letter is : %c",c-32);
	else
		printf("Invalid character");
}

int main()
{
	char c ;
	printf("please enter a character : ");
	scanf("%c",&c) ;
	convert (c);
}

