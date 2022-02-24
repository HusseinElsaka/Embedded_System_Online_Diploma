/*
 ============================================================================
 Name        : C Program to Reverse String Without Using Library Function
 Author      : Hussein Elsaka
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i;
	/* assume that maximum input is 100*/
	char a[100];
	/* take the String from user */
	printf("Enter a String : ");
	fflush(stdin);fflush(stdout);
	gets(a);
	int n = strlen(a);
	/*print Reverse of String*/
	printf("Reverse string is : ");
	for(i = n - 1; i >= 0; i--)
	{
		printf("%c",a[i]);
	}
	return 0;
}
