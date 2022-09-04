/*
 ============================================================================
 Name        : c function to sum numbers from 1 to 100(without loop)
 Author      : Hussein Elsaka
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>


/*
 * sum numbers from 1 to 100(without loop)
 * Input : Number Max To count to
 * Output: return sum from 1 to Max
 * */
int SumNumbers(int max);


int main(void)
{
	printf("The Sum numbers from 1 to 100 is %d",SumNumbers(100));

	return 0;
}


int SumNumbers(int max)
{
	if(max == 0)
	{
		return 0;
	}
	return max + SumNumbers(max - 1);
	/*
	 * return ((max*(max + 1)) / 2)
	 * */
}
