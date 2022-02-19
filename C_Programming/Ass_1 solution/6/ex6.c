/**************************************************************************************************
 Name        : ex6.c
 Author      :Esraa Ebrahim
 Description : Assignment 1 - Ex6
  Write a program that print the relation between two integer number if those numbers are equal,
  not equal and which one contain the higher value
 **************************************************************************************************/
 
#include <stdio.h>

int main( void )
{
    int integer1;
    int integer2;
    int result;
    printf( "Enter first integer:\n" );
    scanf( "%d", &integer1 );
    printf( "Enter second integer:\n" );
    scanf( "%d", &integer2 );
    if(integer1 > integer2)
	{
		printf("integer1 is greater than integer2\n");
	}
	else if(integer1 < integer2)
	{
		printf("integer2 is greater than integer1\n");
	}
	else
	{
		printf("both numbers are equal\n");
	}
    return 0;
}
