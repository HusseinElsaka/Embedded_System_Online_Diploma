/*
 ============================================================================
 Name        : C Program to Add Two Complex Numbers by Passing Structure to a Function  
 Author      : Hussein Elsaka
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
	Test Cases
	2.3
	4.5
	3.4
	5
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Scomplex{
	float real;
	float img;
};

/*
	* This function to enter data from User 
	* Input : massage to print
	* Output : Return the stuct of Complex number have the data
*/
struct Scomplex EnterComplexData(char massage[]);

/*
	* This function to add Complex
	* Input : the stuct of Scomplex that have data 
	* Output: print the Summation
*/
void AddingComplex(struct Scomplex data1,struct Scomplex data2);

int main(void)
{
	struct Scomplex S_data1,S_data2;
	S_data1 = EnterComplexData("first Complex");
	S_data2 = EnterComplexData("second Complex");
	AddingComplex(S_data1, S_data2);
	return 0;
}


struct Scomplex EnterComplexData(char massage[])
{
	struct Scomplex data;
	printf("\nEnter information for %s: \n\n",massage);
	printf("Enter real part : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&data.real);
	printf("Enter img part : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&data.img);
	return data;
}

void AddingComplex(struct Scomplex data1,struct Scomplex data2)
{
	struct Scomplex Sum;
	Sum.real = data1.real + data2.real;
	Sum.img = data1.img + data2.img;
	printf("\nSum of Complex = %0.01f +%0.01f i\n",Sum.real,Sum.img);
}