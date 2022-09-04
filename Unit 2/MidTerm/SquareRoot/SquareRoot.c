/*
 ============================================================================
 Name        : c function to take an integer number and calculate it's square root?
 Author      : Hussein Elsaka
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


/*
 * test case 1: input:4 ->output:2.000
 * test case 2:input:10 ->output:3.126
 * */

#include <stdio.h>

/*
 * Square Root of Integer
 * input : the Integer
 * Output : the Square root of This integer Without fraction
 * */
double SquareRoot(int Number);


int main(void)
{
	int Num;
	printf("Enter the Number : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&Num);
	printf("%.03lf", SquareRoot(Num));
	return 0;
}



double SquareRoot(int Number)
{
	/*
	 * start from 0 to the half of number + 1 to make sure it will get all possible values
	 * first check if Loop Number power 2 is equal the required Number
	 * then ANSWER = THIS number And out of loop
	 * else if power 2 is greater than Required Number so Out
	 * else make the ANSWER = to the Number
	 *
	 * */
	int start,end = (Number / 2) + 1, ans;
	for(start = 0; start <= end; start++)
	{
		if (start * start == Number)
		{
			ans = start;
			break;
		}
		else if(start * start > Number)
		{
			break;
		}
		else
		{
			ans = start;
		}
	}
	/*return sqrt(Number);*/
	/*return pow(Number, 0.5);*/
	return ans;
}
