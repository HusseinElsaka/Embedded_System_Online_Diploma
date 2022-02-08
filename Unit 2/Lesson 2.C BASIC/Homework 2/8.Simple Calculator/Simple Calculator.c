/*
 ============================================================================
// Name      : simple calculator
 Author      : Hussein Elsaka
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	/* declaration*/
	float num1, num2;
	char op;
	/*get the number from user*/
	printf("Enter operator either + or - or * of divide : ");
	fflush(stdout);fflush(stdin);
	scanf("%c", &op);
	printf("Enter two operands : ");
	fflush(stdout);fflush(stdin);
	scanf("%f %f", &num1, &num2);

	/*simple calculator*/
	switch (op)
	{
	case '+':
		printf("%0.02f + %0.02f = %0.02f", num1, num2 , num1 + num2);
		break;
	case '-':
		printf("%f0.02f - %0.02f = %0.02f", num1, num2 , num1 - num2);
		break;
	case'*':
		printf("%0.02f * %0.02f = %0.02f", num1, num2 , num1 * num2);
		break;
	case'/':
		if (num2 != 0)
			printf("%0.02f / %0.02f = %0.02f", num1, num2 , num1 / num2);
		else
			printf("Cant divide by zero");
		break;
	default:
		printf("ERROR");
	}

	return 0;
}
