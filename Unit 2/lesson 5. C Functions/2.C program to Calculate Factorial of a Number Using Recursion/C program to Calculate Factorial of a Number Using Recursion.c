/*
 ============================================================================
 Name        : C program to Calculate Factorial of a Number Using Recursion
 Author      : Hussein Elsaka
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int Factorial(int Number);


int main(void)
{
	int Number;
	printf("Enter an positive integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&Number);
	/* Factorial of Number*/
	if(Number < 0)
	{
		printf("please enter Positive Integer");
	}
	else
	{
		printf("Factorial of %d = %d",Number, Factorial(Number));
	}
	return 0;
}


int Factorial(int Number)
{
	/*Getting Factorial by recursive
	 * 	First check if number is lower than 2
	 * 	if lower then return number
	 * 	else return Number * Factorial of (number - 1) */
	if(Number < 2)
	{
		return Number;
	}
	return Number * Factorial(Number - 1);
}
