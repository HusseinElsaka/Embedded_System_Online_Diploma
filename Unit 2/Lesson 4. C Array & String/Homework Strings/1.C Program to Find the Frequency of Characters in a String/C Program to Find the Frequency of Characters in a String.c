/*
 ============================================================================
 Name        : C Program to Find the Frequency of Characters in a String
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
	int i, counter = 0;
	/* assume that maximum input is 500*/
	char a[100];
	/* take the String from user */
	printf("Enter a String : ");
	fflush(stdin);fflush(stdout);
	gets(a);
	int n = strlen(a);
	char f;
	/* take the char to get its frequency from user */
	printf("Enter a character to find frequency : ");
	fflush(stdin);fflush(stdout);
	scanf("%c", &f);
	/* calculate the frequency of character*/
	for(i = 0; i < n; i++)
	{
		if (f == a[i])
		{
			counter ++;
		}
	}
	/*print number of reapeated */
	printf("Frequency of %c = %i ",f,counter);
	return 0;
}
