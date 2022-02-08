/*
 ============================================================================
// Name        : C Program to Check whether a Number is Positive or Negative
 Author      : Hussein Elsaka
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	/* declaration*/
	float num;
	/*get the number from user*/
	printf("Enter a numbers: ");
	fflush(stdout);fflush(stdin);
	scanf("%f", &num);

	/*Check whether a Number is Positive or Negative*/
	if (num > 0)
		printf("%.02f is positive.", num);
	else if (num < 0)
		printf("%.02f is negative.", num);
	else
		printf("You entered  zero.");

	return 0;
}
