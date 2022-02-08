/*
 ============================================================================
// Name      : C Program to Find Factorial of a Number
 Author      : Hussein Elsaka
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	/* declaration*/
	int n, i = 1, fact = 1;
	/*get the number from user*/
	printf("Enter an integer: ");
	fflush(stdout);fflush(stdin);
	scanf("%i", &n);

	/*Calculate the Factorial of a Number*/
	if(n < 0)
	{
		printf("Error !!! Factorial of negative number doesn't exist.");
		return 1;
	}
	else if (n == 0)
	{
		fact = 1;
	}
	else
	{
		for (; i <= n; i++)
		{
			fact *=i;
		}
	}
	printf("Factorial = %i",fact);

	return 0;
}
