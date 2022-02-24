/*
 ============================================================================
 Name        : C Program to Find the Length of a String
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
	/* assume that maximum input is 100*/
	char a[100];
	/* take the String from user */
	printf("Enter a String : ");
	fflush(stdin);fflush(stdout);
	gets(a);
	/* calculate the Length of String*/
	for(i = 0; i < 100 && a[i] != 0; i++)
	{
		counter ++;
	}
	/*print Length of String*/
	printf("Length of String : %i",counter);
	return 0;
}
