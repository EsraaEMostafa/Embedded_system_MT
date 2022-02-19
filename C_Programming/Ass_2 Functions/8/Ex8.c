/*******************************************************************************************
 Name        : ex8.c
 Author      : Esraa Ebrahim
 Description : Assignment 2 - Ex8
 Write a C Function that display Prime Numbers between Intervals (two numbers) by Making Function
 ********************************************************************************************/
#include<stdio.h>
void display_prime(int n1 ,int n2)
{
	int i ,j;
	int prime = 0 ;
	for(i = n1 ;i<=n2;i++)
	{
		for (j =2 ;j<= (i/2) ;j++)
		{
			if(i%j == 0)
			{
				prime =1 ;
				break ;
			}
		}
		if(prime == 0)
		{
			printf ("%d\t",i);
		}
		else
		{
			prime = 0;
		}
	}
}
int main ()
{
	int num1 ,num2 ;
	printf("please enter two numbers : ");
	scanf("%d%d",&num1,&num2) ;
	display_prime(num1 ,num2);
}
