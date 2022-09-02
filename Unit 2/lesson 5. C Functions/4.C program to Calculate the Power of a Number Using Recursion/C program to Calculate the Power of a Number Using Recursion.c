/*
 ============================================================================
 Name        : C program to Calculate the Power of a Number Using Recursion
 Author      : Hussein Elsaka
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int FindPower(int base, int power);


int main(void)
{
	int Base,Power;
	printf("Enter base number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&Base);
	printf("Enter power number(positive integer): ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&Power);
	printf("%d ^ %d = %d", Base, Power, FindPower(Base, Power));
	return 0;
}


int FindPower(int base, int power)
{
	/*
	 * first Check if the power is zero
	 * then return 1
	 * else if power is 1 so return the base
	 * else return the base multiply by the value next power - 1
	 * it will loop untill get 1
	 * */
	if(power == 0)
		return 1;
	else if(power < 2)
		return base;
	else
		return base * FindPower(base, power - 1);
}
