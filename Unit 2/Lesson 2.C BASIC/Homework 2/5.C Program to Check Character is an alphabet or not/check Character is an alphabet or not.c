/*
 ============================================================================
// Name        : C Program to Check Character is an alphabet or not
 Author      : Hussein Elsaka
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	/* declaration*/
	char charct;
	/*get the number from user*/
	printf("Enter a character: ");
	fflush(stdout);fflush(stdin);
	scanf("%c", &charct);

	/*Check Character is an alphabet or not*/
	if ((charct >= 'a' && charct <= 'z') ||(charct >= 'A' && charct <= 'Z'))
		printf("%c is an alphabet.", charct);
	else
		printf("%c is not an alphabet.", charct);

	return 0;
}
