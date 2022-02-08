/*
 ============================================================================
// Name        : C Program to Calculate the sum of natural numbers
 Author      : Hussein Elsaka
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	/* declaration*/
	int n, i = 1, sum = 0;
	/*get the number from user*/
	printf("Enter an integer: ");
	fflush(stdout);fflush(stdin);
	scanf("%i", &n);

	/*Calculate the sum of natural numbers*/
	for (; i <= n; i++)
	{
		sum +=i;
	}
	printf("Sum = %i",sum);

	return 0;
}
