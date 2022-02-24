/*
 ============================================================================
 Name        : C Program to Insert an element in an Array
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
	int i,n,element, position;
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
	/*take the element be inserted */
	printf("Enter the element be inserted : ");
	fflush(stdin);fflush(stdout);
	scanf("%i",&element);
	/*take the position of element be inserted */
	printf("Enter the location : ");
	fflush(stdin);fflush(stdout);
	scanf("%i",&position);
	/*insert element in array*/
	for(i = 0; i < n + 1; i++)
	{
		if(i + 1 >= position)
		{
			int temp = a[i];
			a[i] = element;
			element = temp;
		}
	}
	for(i = 0; i < n + 1; i++)
	{
		printf("%i ",a[i]);
	}
	return 0;
}
