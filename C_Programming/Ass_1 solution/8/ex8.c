/**************************************************************************************************
 Name        : ex8.c
 Author      : Esraa Ebrahim
 Description : Assignment 1 - Ex 8
 Write a program that reads a positive integer and checks if it is a perfect square.
 **************************************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int input;
    int root;
    printf("Please enter the required number : ");
    scanf("%d",&input);
    root=sqrt(input);
	
    if(input==(root*root))
    {
        printf("%d is the perfect square root of %d",root,input);
    }
    else
    {
        printf("perfect square root not exist");
    }
    return 0;
}
