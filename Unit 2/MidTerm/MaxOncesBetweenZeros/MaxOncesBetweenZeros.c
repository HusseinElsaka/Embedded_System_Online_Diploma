/*
 ============================================================================
 Name        : c function to count the max number of ones between two zeros
 Author      : Hussein Elsaka
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
 *    test case 1:input:14(01110)output:3.
 *    test case 2:input:110(0110 1110).output:3
 * */

#include <stdio.h>
#include <stdlib.h>


/*
 * max number of ones between two zeros
 * input : integer
 * output: Max ones between two zeros
 * */

int MaxBetweenZero(int Number);


int main(void)
{
	int Numb;
	printf("Enter Number : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&Numb);
	printf("Max Number of Ones is %d", MaxBetweenZero(Numb));
	return 0;
}


int MaxBetweenZero(int Number)
{
	/*
	 * Getting Bit bit then Decide
	 * if Bit = 0 reset counter to start count new ones
	 * if Bit = 1 Increase counter by one
	 * Compare MaX VALUE to counter to get update the max ones i have*/
	int counter = 0,Max = -1, BitPlace;
	for(BitPlace = 0; BitPlace < sizeof(Number); BitPlace++)
	{
		int bit = ((Number >> BitPlace) & 1);
		if(bit == 0)
		{
			counter = 0;
		}
		else if(bit == 1)
		{
			counter ++;
		}
		if(counter > Max)
			Max = counter;
	}
	return Max;
}
