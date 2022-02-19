/**************************************************************************************************
 Name        : ex11.c
 Author      : Esraa Ebrahim
 Description : Assignment 1 - Ex 11
 Print sum of first 100 integers. (With data validation)
 **************************************************************************************************/
 
#include <stdio.h>

int main()
{
    int sum=0;
    int i;
    for(i=0;i<100;i++)
    {
        sum += i;
    }
    printf("sum of the first 100 integer numbers equals : %d\n",sum);
	
    return 0;
}
