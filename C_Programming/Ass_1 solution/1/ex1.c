/**************************************************************************************************
 Name        : ex1.c
 Author      : Esraa Ebrahim
 Description : Assignment 1 - Ex 1
 Write a program that take two integers from the user and print the results of this equation:
 Result = ((num1 + num2) * 3) – 10
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
    result = ((integer1 + integer2) * 3) - 10;
    printf( "result is %d\n", result );
    return 0;
}
