/*
 ============================================================================
 Name        : program in C to demonstrate how to handle the pointers in the program.
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>


int main(void)
{
	int m,*ab = 0;
	printf("value of m : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&m);
	printf("the address of m : 0x%x", &m);
	ab = &m;
	printf("\n\nNow ab is assigned with the address of m.\n");
	printf("Address of pointer ab : 0x%x\n", ab);
	printf("Content of pointer ab : %d", *ab);
	m = 34;
	printf("\n\nThe value of m assigned to 34 now.\n");
	printf("Address of pointer ab : 0x%x\n", ab);
	printf("Content of pointer ab : %d", *ab);
	*ab = 7;
	printf("\n\nThe pointer variable ab is assigned with the value 7 now. \n");
	printf("Address of m : 0x%x\n", &m);
	printf("Value of m : %d", m);
	return 0;
}
