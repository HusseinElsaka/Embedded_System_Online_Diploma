/*
 ============================================================================
 Name        : C Program to Add Two Integers
 Author      : Hussein Elsaka
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	/* declare an two integers*/
	int num1, num2;
	/*get two integers from the user*/
	printf("Enter two integers: ");
	fflush(stdout);fflush(stdin);
	scanf("%i %i", &num1, &num2);
	/* print the sum of two integers*/
	printf("Sum: %i\n",num1 + num2);
	return 0;
}
