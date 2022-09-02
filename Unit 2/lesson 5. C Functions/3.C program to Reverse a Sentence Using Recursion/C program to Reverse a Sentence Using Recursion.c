/*
 ============================================================================
 Name        : C program to Reverse a Sentence Using Recursion
 Author      : Hussein Elsaka
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ReverseString(char* string, int length);


int main(void)
{
	char String [100];
	printf("Enter a sentence: ");
	fflush(stdin);fflush(stdout);
	fgets(String, 100, stdin);
	ReverseString(String,strlen(String));
	return 0;
}


void ReverseString(char* string, int length)
{
	/* if length == 0 Mean no string then return
	 * else print the last Character then call the
	 * function by same sting and length -1 */
	if(length < 1)
	{
		return;
	}
	printf("%c",string[length -1]);
	ReverseString(string, length -1);
	return;
}
