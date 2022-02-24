/*
 ============================================================================
 Name        : C Program to Calculate Average Using Array
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
	int i,n;
	/* assume that maximum input is 1000*/
	float a[1000], sum = 0;
	/* take the number of elements from user */
	printf("Enter the Numbers of Data : ");
	fflush(stdin);fflush(stdout);
	scanf("%i",&n);
	for(i = 0; i < n; i++)
	{
		printf("%i. Enter the Number : ",i + 1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&a[i]);
		/*get the sum of array*/
		sum += a[i];
	}
	/*calculate and print the average*/
	printf("Average : %.2f",sum / n);
	return 0;
}
