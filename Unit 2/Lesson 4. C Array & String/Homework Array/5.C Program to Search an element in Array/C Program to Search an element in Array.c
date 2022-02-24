/*
 ============================================================================
 Name        : C Program to Search an element in Array
 Author      : Hussein Elsaka
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,n,element;
	/* assume that maximum input is 500*/
	int a[501];
	/* take the no of elements from user */
	printf("Enter NO of Elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%i",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%i",&a[i]);
	}
	/*take the element to be searched */
	printf("Enter the element to be searched : ");
	fflush(stdin);fflush(stdout);
	scanf("%i",&element);
	/*insert element in array*/
	for(i = 0; i < n + 1; i++)
	{
		/*check if it there or not*/
		if(a[i] == element)
		{
			printf("Number found at the location = %i",i + 1);
			return 0;
		}
	}
	printf("NOT FOUND");
	return 1;
}
