/*
 ============================================================================
 Name      : Example of Multimensional Array In C
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
	int i,j;
	float a[2][2],b[2][2],sum[2][2];
	/*Take input from user
	 * 2D array two loops to enter in correct way */
	/*First array*/
	printf("Enter the elements of 1st Matrix\n");
	for(i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("Enter the a%i%i : ",i + 1, j + 1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&a[i][j]);
		}
	}
	/*Second array*/
	printf("Enter the elements of 2nd Matrix\n");
	for(i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("Enter the b%i%i : ",i + 1, j + 1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&b[i][j]);
		}
	}
	/*Sum of the two array and put it in new array and print it */
	printf("Sum of Matrix\n");
	for(i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
			printf("%0.1f	",sum[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}
