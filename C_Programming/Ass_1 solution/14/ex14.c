/**************************************************************************************************
 Name        : ex14.c
 Author      : Esraa Ebrahim
 Description : Assignment 1 - Ex 14
 Write a program to display English alphabets from A to Z.
 **************************************************************************************************/

#include <stdio.h>
int main()
{
    char c;
	
    for(c = 'A'; c <= 'Z'; ++c)
       printf("%c ", c);
    
    return 0;
}
