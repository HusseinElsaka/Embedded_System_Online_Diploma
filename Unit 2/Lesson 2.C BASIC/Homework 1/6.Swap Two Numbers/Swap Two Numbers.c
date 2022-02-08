/*
 ============================================================================
 Name        : C Program to Find ASCII Value of a Character
 Author      : Hussein Elsaka
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	/* declaration*/
	float a, b;
	/*get the numbers from user*/
	printf("Enter value of a: ");
	fflush(stdout);fflush(stdin);
	scanf("%f", &a);
	printf("Enter value of b: ");
	fflush(stdout);fflush(stdin);
	scanf("%f", &b);

	/*swap and and b useing temp varible*/
	float temp = a;
	a = b;
	b = temp;

	/*print after swapping*/
	printf("After swapping, value of a = %.2f\n",a);
	printf("After swapping, value of b = %.2f\n",b);
	return 0;
}
