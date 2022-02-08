/*
 ============================================================================
 Name        : C Program to Multiply two Floating Point Numbers
 Author      : Hussein Elsaka
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	/* declare an two numbers*/
	float num1, num2;
	/*get two numbers from the user*/
	printf("Enter two numbers: ");
	fflush(stdout);fflush(stdin);
	scanf("%f %f", &num1, &num2);
	/* print the sum of two numbers*/
	printf("Product: %f\n",num1 * num2);
	return 0;
}
