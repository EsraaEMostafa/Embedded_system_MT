/**************************************************************************************************
 Name        : ex5.c
 Author      : Esraa Ebrahim
 Description : Assignment 1 - Ex 5
 Write a program to print the ASCII value of a character input by the user
 **************************************************************************************************/

#include <stdio.h>

int main()
{
    char c;
    printf("Enter a character: ");

    scanf("%c", &c);

    printf("ASCII value of %c = %d", c, c);
    return 0;
}
