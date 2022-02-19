/*******************************************************************************************
 Name        : ex9.c
 Author      : Esraa Ebrahim
 Description : Assignment 2 - Ex9
 Write a C Function that swaps the value of two integer numbers
 ********************************************************************************************/
#include<stdio.h>
void swap (int *n1 ,int *n2)
{
	int temp = *n1 ;
	*n1 =*n2 ;
	*n2 = temp ;
}
int main()
{
	int num1 ,num2 ;
	printf("please enter two numbers : ");
	scanf("%d%d",&num1,&num2) ;
	swap (&num1 ,&num2);
	printf("After swapping : %d  %d" ,num1,num2);
}
