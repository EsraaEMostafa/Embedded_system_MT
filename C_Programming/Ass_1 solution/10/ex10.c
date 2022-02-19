/**************************************************************************************************
 Name        : ex10.c
 Author      : Esraa Ebrahim
 Description : Assignment 1 - Ex 10
 Write a program to make a simple calculator using switch-case. The calculator takes the operation
 (+ or – or * or /) and takes the two input arguments and print the results.
 **************************************************************************************************/

#include "stdio.h"

int main() {

    char operator;
    float firstNumber,secondNumber;
    double result;

    printf("Enter an operator + or - or * or % ");
    scanf("%c", &operator);

    printf("\nEnter two operands: ");
    scanf("%f %f",&firstNumber, &secondNumber);
	
    switch(operator)
    {
        case '+':
        	result = firstNumber + secondNumber;
            printf("\n%f + %f = %lf",firstNumber, secondNumber, result);
            break;

        case '-':
        	result = firstNumber - secondNumber;
            printf("\n%f - %f = %lf",firstNumber, secondNumber, result);
            break;

        case '*':
        	result = firstNumber * secondNumber;
            printf("\n%f * %f = %lf",firstNumber, secondNumber, result);
            break;

        case '/':
        	result = firstNumber / secondNumber;
            printf("\n%f / %f = %lf",firstNumber, secondNumber, result);
            break;

        default:
            printf("Error! operator is not correct");
    }

    return 0;
}
