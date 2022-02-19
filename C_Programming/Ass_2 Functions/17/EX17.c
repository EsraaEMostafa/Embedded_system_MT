/*******************************************************************************************
 Name        : ex17.c
 Author      : Esraa Ebrahim
 Description : Assignment 2 - Ex 17
 Given two integers: L and R, Find the maximal value of A xor B where
 A and B satisfy the condition L =< A <= B <= R Constrains: 1 <= L <= R <= 1000
 Input format: the input contains two lines first line contains L and next line contains R.
 Output format: The maximum value of A xor B
 ********************************************************************************************/

#include<stdio.h>
int max_xor (int l,int r)
{
	int a ,b ;
	int max =0 ;
	for ( a = l; a<=r;a++)
	{
		for ( b = a; a<=r;a++)
		{
			int xor = a^b ;
			if(max < xor )
				max = xor ;
		}
	}
	return max ;
}
int main()
{
	int L ,R ;
	scanf("%d%d",&L,&R);
	int res = max_xor (L,R);
    printf("the maximal value of %d xor %d = %d",L,R,res);
	return 0 ;
}
