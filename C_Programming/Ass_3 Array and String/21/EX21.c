/*********************************************************************************************
 Name        : ex21.c
 Author      : Esraa  Ebrahim
 Description : Assignment 3 - Ex21
 Write a C function to return an array containing the values between two 8-bits unsigned
 integers IN DESCENDING ORDER INCLUSIZE. The function takes 2 values (LowerValue and UpperValue),
 it shall determine the values in between, and then arrange the sequence in descending order
 including the upper and lower values. If the LowerValue is greater than the UpperValue,
 return an array of 2 elements, both containing value = 0xFF
 Example:
 Input: LowerValue=2 and UpperValue=5
 Output:
 Output Array=5,4,3,2
 Output Array Size=4
 *********************************************************************************************/
#include <stdio.h>
#include <stdio.h>
int output_Array[256] ;
int * Array (int l ,int u ,int *ptr)
{
	int i ;
	if(l >= u)
	{
		*ptr = 2;
		for(i=0;i<(*ptr);i++)
		{
			output_Array[i]=0xFF ;
		}
	}
	else
	{
		*ptr = u-l+1;
		for(i=0;i<(*ptr);i++)
		{
			output_Array[i]= u-i;
		}
	}
	return  output_Array;
}
int main()
{
	int LowerValue, UpperValue ;
	int *ptr ;
	int Output_Array_Size = 0;
	int i;
	printf("Enter the LowerValue and UpperValue : ");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&LowerValue,& UpperValue);
	ptr = Array (LowerValue, UpperValue,&Output_Array_Size);
	printf("Output Array = ");
	for(i=0;i<Output_Array_Size;i++)
	{
		printf("%d ", ptr[i]);
	}
	printf("\nOutput Array Size = %d ",Output_Array_Size );
	return 0 ;
}
