/*******************************************************************************************
 Name        : ex18.c
 Author      : Esraa Ebrahim
 Description : Assignment 2 - Ex 18
 Given a positive integer z, check if z can be written as pow(p,q), where p
 and q are positive integers than 1, if z can be written as pow(p,q)return 1 else
 return 0.
 ********************************************************************************************/

#include<stdio.h>
#include<math.h>
int ispower(int n)
{
	int i,j ;
	for(i=2;i<=n/2;i++)
	{
		for (j= 2;j<= n/2;j++)
		{
			if(n == pow(i ,j))
				return 1;
		}
	}
	return 0;
}
int main()
{
	int num ;
	scanf ("%d",&num);
	int res = ispower(num );
	if (res == 1)
		printf("can be written as power");
	else
		printf("can not be written as power");

	return 0 ;
}
