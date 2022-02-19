/*******************************************************************************************
 Name        : ex1.c
 Author      : Esraa Ebrahim
 Description : Assignment 2 - Ex 1
 Write a C Function that prints the cube of any number
 ********************************************************************************************/
#include <stdio.h>
int cube (int x)
{
	return x*x*x ;
}
int main()
{
	int num ;
	int res ;
	printf("please enter a number : ");
	scanf("%d",&num) ;
	res = cube (num) ;
	printf("\nThe cube value of %d is %d",num,res);
}
