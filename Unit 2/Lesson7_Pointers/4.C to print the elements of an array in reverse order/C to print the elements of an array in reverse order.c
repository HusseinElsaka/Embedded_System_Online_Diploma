/*
 ============================================================================
 Name        : program in C to print the elements of an array in reverse order
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>

int main(void)
{
	int arr[15], i, max,*RevArr =0;
	printf("Input the number of elements to store in the array (max 15) : ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &max);
	for(i = 0; i < max; i++)
	{
		printf("element- %d: ", i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d", (arr + i));
	}
	printf("The elements of array in reverse order are : \n");
	RevArr = arr + (max-1);
	for(i = max ;i > 0; i--)
	{

		printf("element - %d : %d\n", i, *RevArr--);
	}

	return 0;
}
