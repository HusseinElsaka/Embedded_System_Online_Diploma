/*
 ============================================================================
 Name        : C Program to Find the Largest Number amont three numbers
 Author      : Hussein Elsaka
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	/* declaration*/
	float num1, num2, num3;
	/*get the number from user*/
	printf("Enter three numbers: ");
	fflush(stdout);fflush(stdin);
	scanf("%f %f %f", &num1,&num2,&num3);

	/*Find the Largest Number amont three numbers*/
	if (num1 > num2 && num1 > num3)
		printf("Largest number : %.02f", num1);
	else if (num2 > num1 && num2 > num3)
		printf("Largest number : %.02f", num2);
	else
		printf("Largest number : %.02f", num3);

	return 0;
}
