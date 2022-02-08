/*
 ============================================================================
 Name        : C Program to Check Whether Number is Even or Odd
 Author      : Hussein Elsaka
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	/* declaration*/
	int num;
	/*get the number from user*/
	printf("Enter an integer you want to check: ");
	fflush(stdout);fflush(stdin);
	scanf("%i", &num);

	/*check the number is even or odd*/
	if (num % 2 == 0)
		printf("%i is even.", num);
	else
		printf("%i is odd.", num);

	return 0;
}
