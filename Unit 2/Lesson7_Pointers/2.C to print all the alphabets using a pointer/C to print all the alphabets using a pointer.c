/*
 ============================================================================
 Name        :  program in C to print all the alphabets using a pointer. Go to the editor
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>


int main(void)
{
	char alphabet[26], *alphaPtr = 0,i;
	for (i = 0; i < 26; i++)
	{
		alphabet[i] = i + 'A';
	}
	alphaPtr = alphabet;
	for (i = 0; i <26; i++)
	{
		printf("%c ", *(alphaPtr + i));
	}
	printf("\n");
	i = 0;
	while(i < 26)
	{
		printf("%c ", *alphaPtr);
		alphaPtr++;
		i++;
	}
	return 0;
}
