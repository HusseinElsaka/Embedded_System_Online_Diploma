/*
 ============================================================================
 Name         C Program to find area of a circle, passing arguments to macros. [Area of circle=nr2]  
 Author       Hussein Elsaka
 Version     
 Copyright    Your copyright notice
 Description  Hello World in C, Ansi-style
 ============================================================================
 */

/*
	Test Cases
	3
*/

#include stdio.h
#include stdlib.h
#include string.h

#define AREA(X) ((X)  (X)  (3.141))


int main(void)
{
	float number;
	do
	{
		printf(Enter the radius  );
		fflush(stdin);fflush(stdout);
		scanf(%f,&number);
	}
	while(number  0);
	printf(Area  %0.001f, AREA(number));
	return 0;
}
