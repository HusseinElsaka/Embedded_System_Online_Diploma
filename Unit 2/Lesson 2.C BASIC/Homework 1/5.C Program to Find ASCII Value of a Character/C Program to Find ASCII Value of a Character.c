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
	char x;
	/*get the character from user*/
	printf("Enter a character: ");
	fflush(stdout);fflush(stdin);
	scanf("%c", &x);
	/*print ASCII Value of a Character*/
	printf("ASCII value of %c = %i\n",x,x);
	return 0;
}
