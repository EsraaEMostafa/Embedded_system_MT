/**************************************************************************************************
 Name        : ex15.c
 Author      : Esraa Ebrahim
 Description : Assignment 1 - Ex 15
 Write a program to calculate the power of a number.The number and its power are input from user
 **************************************************************************************************/

#include <stdio.h>

int main()
{
    int num, power;

    long long result = 1;

    printf("Enter a num number: ");
    scanf("%d", &num);

    printf("\nEnter an power: ");
    scanf("%d", &power);

    while (power != 0)
    {
        result *= num;
        --power;
    }

    printf("\nAnswer = %lld", result);

    return 0;
}
