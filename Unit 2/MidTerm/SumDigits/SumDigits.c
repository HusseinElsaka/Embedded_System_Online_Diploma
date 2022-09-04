/*
 ============================================================================
 Name        : c function to take a number and sum all digits?
 Author      : Hussein Elsaka
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


/*
 * test case 1: input:123 ->output:6
 * test case 2: input:4565 ->output:20
 * */

#include <stdio.h>

/*
 * Sum of all number is digits
 * input : the Number
 * Output : the Summation of digits
 * */
int sumDigits(int Number);


int main(void)
{
	int Num;
	printf("Enter the Number : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&Num);
	printf("%d", sumDigits(Num));
	return 0;
}



int sumDigits(int Number)
{
	/*
	 * start take the number
	 * Modules it with 10 to take the first number
	 * divide it to delete the first Number
	 * Repeat until zero*/
	int sum = 0;
	while(Number > 0)
	{
		sum += (Number % 10);
		Number /= 10;
	}
	return sum;
}
