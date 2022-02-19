/**************************************************************************************************
 Name        : ex13.c
 Author      : Esraa Ebrahim
 Description : Assignment 1 - Ex 13
 Write a program that reads a positive integer and checks if it is a prime.
 **************************************************************************************************/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main()
{
    int input;
    int i;
    int prime_num = TRUE;
    printf("Please enter the required number : ");
    scanf("%d",&input);

    for(i=2;i<=(input/2);i++)
    {
        if(input%i == 0)
        {
            prime_num = FALSE;
            printf("\n%d is not prime number\n",input);
			break;
        }
    }
    if(prime_num == TRUE)
    {
        printf("\n%d is a prime number\n",input);
    }
    return 0;
}
