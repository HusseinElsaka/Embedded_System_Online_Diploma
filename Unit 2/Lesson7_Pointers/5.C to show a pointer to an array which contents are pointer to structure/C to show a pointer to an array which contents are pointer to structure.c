/*
 ============================================================================
 Name        : program in C to show a pointer to an array which contents are pointer to structure.
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>

struct empolyee{
	char name[100];
	int ID;
};

int main(void)
{
	struct empolyee empoly1 = {"Ahmed",213};
	struct empolyee empoly2 = {"Alex", 1002};
	struct empolyee empoly3 = {"Mohamed", 2363};
	struct empolyee empoly4 = {"Ziad", 256};
	struct empolyee empoly5 = {"Hossam", 1279};
	struct empolyee (*arrPTR[]) = {&empoly1, &empoly2, &empoly3, &empoly4, &empoly5};
	struct empolyee (*(*PTRarrPtr)[5]) = &arrPTR;

	int i;
	for(i = 0; i < 5; i++)
	{
		printf("Employee Name : %s\n", (*(*PTRarrPtr+i))->name);
		printf("Employee ID : %d\n\n", (*(*PTRarrPtr+i))->ID);
	}
	return 0;
}
