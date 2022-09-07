/*
 ============================================================================
 Name        : C Program to Add Two Distances (in inch-feet) System Using Structures 
 Author      : Hussein Elsaka
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
	Test Cases
	12
	3.4
	12
	9.2
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct SDistanceFeetInch{
	int feet;
	float inch;
};

/*
	* This function to enter data from User 
	* Input : massage to print
	* Output : Return the stuct of SDistanceFeetInch have the data
*/
struct SDistanceFeetInch EnterDistanecData(char massage[]);

/*
	* This function to add two distance (in inch-feet) System
	* Input : the stuct of SDistanceFeetInch that have data 
	* Output: print the Summation
*/
void AddingDistance(struct SDistanceFeetInch data1,struct SDistanceFeetInch data2);

int main(void)
{
	struct SDistanceFeetInch S_data1,S_data2;
	S_data1 = EnterDistanecData("first distance");
	S_data2 = EnterDistanecData("second distance");
	AddingDistance(S_data1, S_data2);
	return 0;
}


struct SDistanceFeetInch EnterDistanecData(char massage[])
{
	struct SDistanceFeetInch data;
	printf("\nEnter information for %s: \n\n",massage);
	printf("Enter feet : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&data.feet);
	printf("Enter inch : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&data.inch);
	return data;
}

void AddingDistance(struct SDistanceFeetInch data1,struct SDistanceFeetInch data2)
{
	struct SDistanceFeetInch Sum;
	Sum.inch = (data1.inch + data2.inch) - (floor(data1.inch + data2.inch));
	Sum.feet = data1.feet + data2.feet + (floor(data1.inch + data2.inch) / 12);
	printf("\nSum of distance = %d'-%0.01f\" \n",Sum.feet,Sum.inch);
}