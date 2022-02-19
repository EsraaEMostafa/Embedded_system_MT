/*******************************************************************************************
 Name        : ex7.c
 Author      : Esraa Ebrahim
 Description : Assignment 2 - Ex7
 Write a C Function that reads two integers and checks if the first is multiple of the second
 ********************************************************************************************/

#include<stdio.h>
void check_multiple (int n1 ,int n2)
{
	if(n1%n2 == 0)
		printf("%d is multiply of %d",n1,n2);
	else
		printf("%d is not multiply of %d",n1,n2);
}
int main()
{
	int num1 ,num2 ;
	printf("please enter two numbers : ");
	scanf("%d%d",&num1,&num2) ;
	check_multiple (num1 ,num2);
	return 0 ;
}
