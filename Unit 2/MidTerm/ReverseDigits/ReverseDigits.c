/*
 ============================================================================
 Name        : c function to reveres digits in number?
 Author      : Hussein Elsaka
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


/*
 * test case 1:
 * input:2457 ->output:7542 .
 * test case 2:
 * input:1057 ->output:7501
 **/

#include <stdio.h>
#include <stdlib.h>


/*
 * ReverseDigits
 * Input : Number to Reverse
 * Output: return Reversed Number
 * */
int ReverseDigits(int Number);


int main(void)
{
	int Num;
	printf("Enter the Number : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&Num);
	printf("%d", ReverseDigits(Num));
	return 0;
}


int ReverseDigits(int Number)
{
	/*
	 * first take the first digit in Number and added to
	 * the last reversed Multiplied by 10
	 * so it move the reversed it left to put new number*/
	int Reversed = 0;
	while(Number > 0)
	{
		Reversed = (Reversed * 10) + (Number % 10);
		Number /= 10;
	}
	return Reversed;

}
