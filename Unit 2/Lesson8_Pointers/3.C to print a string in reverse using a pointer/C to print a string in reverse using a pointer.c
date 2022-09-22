/*
 ============================================================================
 Name        : program in C to print a string in reverse using a pointer
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
	char string[100], *reverseStirng = 0;
	printf("Input a string : ");
	fflush(stdin);fflush(stdout);
	fgets(string,100,stdin);
	char length = strlen(string) - 2;
	reverseStirng = string;
	printf("Reverse of the string is : ");
	for(;length >= 0; length--)
	{
		printf("%c", *(reverseStirng + length));
	}

	return 0;
}
