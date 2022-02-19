/**************************************************************************************************
 Name        : ex12.c
 Author      : Esraa Ebrahim
 Description : Assignment 1 - Ex 12
  Write a program that reads a positive integer and computes the factorial.
 **************************************************************************************************/

#include <stdio.h>

int main()
{
    int input;
    long long fact = 1;
    int i;
    printf("Please enter the required number : ");
    scanf("%d",&input);
	
    for(i=1;i<=input;i++)
    {
        fact *= i;
    }
    printf("\nfactorial of %d is: %ld",input,fact);
    return 0;
}
