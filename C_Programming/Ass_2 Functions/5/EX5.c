/*******************************************************************************************
 Name        : ex5.c
 Author      : Esraa Ebrahim
 Description : Assignment 2 - Ex5
 Write a C function to check if the input is an even number or an odd number,
 if even number return 0 if odd number return 1.
 ********************************************************************************************/
#include<stdio.h>
int check_even_odd(int n)
{
	if (n %2 == 0)
		return 0 ;
	else
		return 1;
}

int main()
{
	int num ;
	int res ;
	printf("please enter a number : ");
	scanf("%d",&num) ;
	res = check_even_odd(num);
	if(res == 0)
		printf("the number is even");
	else
		printf("the number is odd");
}
