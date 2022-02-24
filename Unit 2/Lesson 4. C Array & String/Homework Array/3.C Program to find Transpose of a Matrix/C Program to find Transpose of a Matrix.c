/*
 ============================================================================
 Name        : C Program to find Transpose of a Matrix
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
	int i,j,col,row;
	/* assume that maximum input is 500*/
	int a[500][500];
	/* take the colume and rows of matrix from user */
	printf("Enter rows and columns of Matrix : ");
	fflush(stdin);fflush(stdout);
	scanf("%i %i",&row, &col);
	/*take input of the matrix */
	printf("Enter the elements of the Matrix\n");
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("Enter elements of a%i%i : ",i + 1,j + 1);
			fflush(stdin);fflush(stdout);
			scanf("%i",&a[i][j]);
		}
	}
	/*print the entered Matrix*/
	printf("The entered Matrix\n");
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			printf("%i	",a[i][j]);
		}
		printf("\n");
	}
	/*print the transpose of matrix*/
	printf("The Transpose Matrix\n");
	for(i = 0; i < col; i++)
	{
		for(j = 0; j < row; j++)
		{
			printf("%i	",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}
