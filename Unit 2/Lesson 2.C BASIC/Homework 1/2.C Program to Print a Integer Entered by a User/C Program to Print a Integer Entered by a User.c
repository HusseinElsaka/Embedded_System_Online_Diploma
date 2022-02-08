/*
 ============================================================================
 Name        : C Program to Print a Integer Entered by a User
 Author      : Hussein Elsaka
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	/* declare an integer*/
	int integer;
	/*get integer input from the user*/
	printf("Enter a integer: ");
	fflush(stdout);fflush(stdin);
	scanf("%i",&integer);
	/* print it*/
	printf("You entered: %i\n",integer);
	return 0;
}
