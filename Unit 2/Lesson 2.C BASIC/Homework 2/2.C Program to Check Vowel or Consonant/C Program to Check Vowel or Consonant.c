/*
 ============================================================================
 Name        : C Program to Check Vowel or Consonant
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
	printf("Enter an alphabet: ");
	fflush(stdout);fflush(stdin);
	scanf("%c", &charct);

	/*check Vowel or Consonant*/
	if (charct == 'a' || charct == 'e' || charct == 'u' || charct == 'i' || charct == 'o')
		printf("%c is vowel.", charct);
	else if (charct == 'A' || charct == 'E' || charct == 'U' || charct == 'I' || charct == 'O')
		printf("%c is vowel.", charct);
	else
		printf("%c is consonant.", charct);

	return 0;
}
