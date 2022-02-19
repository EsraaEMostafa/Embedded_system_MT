/*********************************************************************************************
 Name        : ex15.c
 Author      : Esraa  Ebrahim
 Description : Assignment 3 - Ex15
 Write a function to concatenate two strings without using strcat function
 *********************************************************************************************/
#include <stdio.h>
#include <string.h>
# define SIZE 20
void  concatenate (char*str1,char*str2)
{
	int len1 = strlen(str1);
	int i ,j =len1;
	for (i=0;str2[i] != 0 ;i++,j++)
	{
		str1[j] = str2[i];
	}
	str1[j] = '\0';

}
int main()
{
	char str1 [10];
	char str2 [SIZE];
	printf("Enter first string : ");
	fflush(stdin);fflush(stdout);
	gets(str1);
	printf("Enter second string : ");
	fflush(stdin);fflush(stdout);
	gets(str2);
	concatenate(str1,str2);
	puts(str1);
	return 0 ;
}
