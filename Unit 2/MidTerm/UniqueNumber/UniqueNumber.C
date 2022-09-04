/*
 ============================================================================
 Name        : c function to return unique number in array with one loop?
 Author      : Hussein Elsaka
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


/*
 * test case 1:
 * input:int a[7]={4,2,5,2,5,7,4};
 * output:7.
 * test case 2:
 * input: int a[3]={4,2,4};
 * output:2.
 **/

#include <stdio.h>
#include <stdlib.h>


/*
 * Find the Unique Number in array
 * Input : array of Numbers
 * Output: return Unique Number in array
 * */
int UniqueNumber(int arr[], int size);


int main(void)
{
	int arrNum[10], N, i;
	printf("Enter the Number of Array Elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&N);
	for(i = 0; i < N; i++)
	{
		printf("Element (%d) : ",i);
		fflush(stdin);fflush(stdout);
		scanf("%d",&arrNum[i]);
	}
	printf("The Unique Number is %d",UniqueNumber(arrNum, N));

	return 0;
}


int UniqueNumber(int arr[], int size)
{
	/*
	 * loop with elements to search if it exist
	 * if we find the number increase the counter of happened and out
	 * else if loop all array and didnt have it so the counter will be zero
	 * so this is uniqune number out and return it */
	int i, j, counter, UiqueIndex = -1;
	for(i = 0; i < size; i++)
	{
		counter = 0;
		for (j = 0; j < size; j++)
		{
			if (j == i)
				continue;
			if(arr[i] == arr[j])
			{
				counter ++;
				break;
			}
		}
		if(counter == 0)
		{
			UiqueIndex = i;
			break;
		}
	}
	return arr[UiqueIndex];
}
