/*******************************************************************************************
 Name        : ex4.c
 Author      : Esraa Ebrahim
 Description : Assignment 2 - Ex4
 Write a C Function that return the addition or subtraction or multiplication or division for
 two numbers. The function should take the required operation and two numbers as arguments.
 It also should check that the input operation is one of those operation that mentioned before
 and if not it should return error. The function should be implemented using switch case
 ********************************************************************************************/

#include<stdio.h>

float calc (float n1 ,float n2 ,char op)
{
	float res = 0;
	switch(op)
	{
	case'+':
		res = n1+ n2 ;
		break ;
	case'-':
		res = n1- n2 ;
		break ;
	case'*':
		res = n1*n2 ;
		break ;
	case'/':
		res = n1/ n2 ;
		break ;
	default :
		printf("the operator is Invalid");
	}
	return res ;
}

int main()
{
	float num1 ,num2 ;
	char op ;
	printf("please enter the operator : ");
	scanf("%c",&op) ;
	printf("please enter two numbers : ");
	scanf("%f%f",&num1,&num2) ;
	float res = calc(num1 ,num2 ,op);
	if(res != 0)
		printf("the result = %f" ,res);
	else
		printf("No result");

}
