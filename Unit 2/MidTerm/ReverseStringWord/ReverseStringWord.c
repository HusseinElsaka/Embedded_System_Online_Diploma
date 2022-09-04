/*
 ============================================================================
 Name        : c function to reverse words in string?
 Author      : Hussein Elsaka
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
 *   test case :
 *   input: mohamed gamal.
 *   output:gamal mohamed.
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
 * Reverse Array Elements
 * input : Input array to reverse , array to put the reversed array
 * output: fill the Reversed Array
 * */

void ReverseStringWord(char string[], char RevString []);


int main(void)
{
	char string[100], newstring[100];
	printf("Enter String : ");
	fflush(stdin);fflush(stdout);
	fgets(string,100,stdin);
	printf("before Reverse Word : ");
	puts(string);
	ReverseStringWord(string, newstring);
	printf("after Reverse Word : ");
	puts(newstring);
	return 0;
}


void ReverseStringWord(char string[], char RevString [])
{
	/*
	 * Reverse string by search the space from back of the string
	 * when get it take the word after it */

	int length = strlen(string), i, start = 0 , end = length-1, RevCounter = 0;
	for(i = length - 1; i >= 0; i--)
	{
		if(string[i] == ' ' || i == 0)
		{
			for(start = i; start < end; start++)
			{
				RevString[RevCounter] = string[start];
				RevCounter++;
			}
			RevString[RevCounter] = ' ';
			RevCounter++;
			end = i;
		}
	}
}
