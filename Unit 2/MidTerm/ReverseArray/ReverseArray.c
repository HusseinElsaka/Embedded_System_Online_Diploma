/*
 ============================================================================
 Name        : c function to take an array and revers its elements?
 Author      : Hussein Elsaka
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
 * test case 1:
 * input:int a[5]={1,2,3,4,5}; output:5 4 3 2 1
 *
 * */

#include <stdio.h>
#include <stdlib.h>


/*
 * Reverse Array Elements
 * input : Input array to reverse , array to put the reversed array
 * output: fill the Reversed Array
 * */

void ReverseArray(int arr[], int ReverseArr[], int size);


int main(void)
{
	int arrNum[100],arrRev[100], N, i;
	printf("Enter the Number of Array Elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&N);
	for(i = 0; i < N; i++)
	{
		printf("Element (%d) : ",i);
		fflush(stdin);fflush(stdout);
		scanf("%d",&arrNum[i]);
	}
	ReverseArray(arrNum, arrRev, N);
	for(i = 0; i < N; i++)
		printf("%d ",arrNum[i]);
	printf("\n");
	for(i = 0; i < N; i++)
		printf("%d ",arrRev[i]);
	return 0;
}


void ReverseArray(int arr[], int ReverseArr[], int size)
{
	int i;
	for(i = 0; i < size; i++)
		ReverseArr[i] = arr[size - i - 1];
}
