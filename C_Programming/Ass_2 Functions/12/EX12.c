/*******************************************************************************************
 Name        : ex12.c
 Author      : Esraa Ebrahim
 Description : Assignment 2 - Ex 12
 Write a C function that calculates the required heater activation time
 according to the input temperature of water.
- if input temperature is from 0 to 30, then required heating time = 7 mins.
- if input temperature is from 30 to 60, then required heating time = 5 mins.
- if input temperature is from 60 to 90, then required heating time = 3 mins.
- if input temperature is more than 90, then required heating time = 1 mins.
- if temperature is invalid (more than 100), return 0
 ********************************************************************************************/
#include<stdio.h>
int heater_time (int h)
{
	if (h >=0 && h<30)
		return 7;
	else if (h >=30 && h<60)
		return 5 ;
	else if (h >=60 && h<90)
		return 3;
	else if (h >=90 && h<=100)
		return 1 ;
	else
		return 0 ;
}
int main ()
{
	int heater ;
	printf("please enter the heater : ");
	scanf("%d",&heater);
	printf("the required heater activation time = %d mins",heater_time(heater));
}
