/*******************************************************************************************
 Name        : ex13.c
 Author      : Esraa Ebrahim
 Description : Assignment 2 - Ex 13
 In this challenge write a function to add two floating numbers. Determine the integer floor
 of the sum. The floor is the truncated float value, anything after the decimal point is dropped.
 For instance floor(1.1+3.05)=floor(4.15)=4
 ********************************************************************************************/
#include<stdio.h>
int floor (float n1 ,float n2)
{
	return (int)(n1 +n2);
}
int main()
{
	float num1 ,num2 ;
	printf("please enter two floating numbers :");
	scanf("%f%f",&num1,&num2);
	printf("the floor = %d",floor(num1,num2));
	return 0;
}
