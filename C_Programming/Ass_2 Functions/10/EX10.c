/*******************************************************************************************
 Name        : ex10.c
 Author      : Esraa Ebrahim
 Description : Assignment 2 - Ex 10
 You are designing a poster which prints out numbers with a unique style applied to each of them.
 The styling is based on the number of closed paths or holes present in a giver number
 The number of holes that each of the digits from 0 to 9 have are equal to the number of closed
 paths in the digit
 ********************************************************************************************/

#include<stdio.h>
int number_of_holes (int n)
{
	int count = 0;
	while(n != 0)
	{
		int d = n%10 ;
		if((d ==0)||(d ==4)||(d ==6)||(d ==9))
			count ++ ;
		else if(d == 8)
			count+=2;
		n /=10 ;
	}
	return count ;
}
int main()
{
	int num ;
	printf("please enter a number : ");
	scanf("%d",&num) ;
	printf ("number of holes = %d", number_of_holes(num));
}
