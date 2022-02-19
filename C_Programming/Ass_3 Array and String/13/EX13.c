/*********************************************************************************************
 Name        : ex13.c
 Author      : Esraa  Ebrahim
 Description : Assignment 3 - Ex13
 Write a function to remove all characters in a string expect alphabet
 *********************************************************************************************/
#include <stdio.h>
# define SIZE 20
void remove_ch(char*str)
{
	int i =0 ,j;
	while(str[i] != 0)
	{
		while(!((str[i]>= 'a'&&str[i]<='z')||(str[i]>= 'A'&&str[i]<='Z'))&&str[i] !=0)
		{
			for(j=i;str[j]!=0;j++)
			{
				str[j]=str[j+1];
			}
		}
		i++;
	}
}
int main()
{
	char str [SIZE];
	printf("Enter a string :");
	fflush(stdin);fflush(stdout);
	gets(str);
	remove_ch (str);
	puts(str);
	return 0 ;
}
