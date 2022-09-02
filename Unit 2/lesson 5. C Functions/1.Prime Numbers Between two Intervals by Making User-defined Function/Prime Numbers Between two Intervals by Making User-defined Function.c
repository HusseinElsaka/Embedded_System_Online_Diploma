/*
 ============================================================================
 Name        : Prime Numbers Between two Intervals by Making User-defined Function
 Author      : Hussein Elsaka
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int IsPrime(int Number);


int main(void)
{
	int NumberStart, NumberEnd, i;
	printf("Enter two numbers(intervals): ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&NumberStart, &NumberEnd);
	/*Looping from start to end to get the
	 * Prime Numbers Between*/
	printf("Prime numbers between %d and %d are : ", NumberStart, NumberEnd);
	for(i = NumberStart; i <= NumberEnd; i++)
	{
		if (IsPrime(i) == 0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}


int IsPrime(int Number)
{
	/*Checking the Prime Number
	 * 	First see it it equal == 2
	 * 	Then see if it Even or not
	 * 		if it even and not equal == 2
	 * 		so Can't be prime
	 * 	if it odd So we loop to see it can divide by any number
	 * 	to Check its prime or not
	 * 	Return 0 if Prime */
	int prime = 0, i;
	if(Number == 2)
	{
		prime = 0;
	}
	else if(Number % 2 == 0 || Number < 2)
	{
		prime = 1;
	}
	else
	{
		for (i = 2; i < (Number / 2); i++)
		{
			if(Number % i == 0)
			{
				prime ++;
				break;
			}
		}
	}
	return prime;
}
