/*
 ============================================================================
 Name        : Swap Two Numbers without temp variable
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

	/*swap and and b without using temp variable*/
	a += b; /*sum of two variables*/
	b = a - b; /* get the value of a*/
	a = a - b; /* get the value of b*/

	/*print after swapping*/
	printf("After swapping, value of a = %.2f\n",a);
	printf("After swapping, value of b = %.2f\n",b);
	return 0;
}
