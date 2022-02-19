/*******************************************************************************************
 Name        : ex3.c
 Author      : Esraa Ebrahim
 Description : Assignment 2 - Ex 3
 Write a C Function that check if the number if positive or negative
 ********************************************************************************************/
#include <stdio.h>

void check (int n)
{
	if(n>0)
		printf("the number is positive");
	else if(n<0)
		printf("the number is negative");
	else
		printf("the number is Zero");
}
int main()
{
	int num ;
	printf("please enter a number : ");
	scanf("%d",&num) ;
	check (num);
	return 0 ;
}
