/*
 ============================================================================
 Name        : c function to count number of ones in binary number?
 Author      : Hussein Elsaka
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


/*
 * test case 1:
 * input:5 ->output: 2 --->binary of 5 is 0101 so has 2 one's
 * test case 2:
 * input:15 ->output:4;
 **/

#include <stdio.h>
#include <stdlib.h>


/*
 * Count Ones in the Binary Number
 * Input : Number to Count its once
 * Output: return counter
 * */
int CountOnes(int Number);


int main(void)
{
	int Num;
	printf("Enter the Number : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&Num);
	printf("%d", CountOnes(Num));
	return 0;
}


int CountOnes(int Number)
{
	/*
	 * take the first bit on number and
	 * Make & and with 1
	 * if Bit value == 1
	 * then increase counter
	 * else nothing
	 * increase to the next bit*/
	int counter = 0, bitPlace = 0;
	while(bitPlace < sizeof(Number) * 8)
	{
		int BitValue = (Number >> bitPlace) & 1;
		if(BitValue == 1)
			counter++;
		bitPlace ++;
	}
	return counter;

}
