/*******************************************************************************************
 Name        : ex11.c
 Author      : Esraa Ebrahim
 Description : Assignment 2 - Ex 11
 Write a C function that returns 1 if the input number is a power of 2
 and return 0 if the input number is not power of 2
 ********************************************************************************************/
#include<stdio.h>
#include <math.h>
int power (int x);
int main(){
	int num;
	scanf("%d",&num);
	int res =power(num);
	if(res == 1)
		printf("the input number is a power of 2");
	else
		printf("the input number is not a power of 2");
	return 0;
}
int power (int x){
	int y = sqrt (x);
	int i;
	for (i=0;i<=y+1;i++){
		if (x == pow(2,i))
			return 1;
	}
	return 0;
}

