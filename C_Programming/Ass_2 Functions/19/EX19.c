/*******************************************************************************************
 Name        : ex19.c
 Author      : Esraa Ebrahim
 Description : Assignment 2 - Ex 19
 Write a C function that return 0 if a given number is a power of 3,
 otherwise return 1 (except 3 to the power of 0)
 ********************************************************************************************/

#include<stdio.h>
#include<math.h>
int ispower3(int n)
{
	int i ;
	for(i=2;i<=n/2;i++)
	{
		if(n == pow(i,3))
			return 0;
	}
	return 1;
}
int main()
{
	int num ;
	scanf ("%d",&num);
	int res = ispower3(num );
	if (res == 0)
		printf("the number is a power of 3");
	else
		printf("the number is not a power of 3");

	return 0 ;
}
