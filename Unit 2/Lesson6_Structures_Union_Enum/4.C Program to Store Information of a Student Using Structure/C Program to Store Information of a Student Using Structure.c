/*
 ============================================================================
 Name        : C Program to Store Information(name, roll and marks) of a Student Using Structure 
 Author      : Hussein Elsaka
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
	Test Cases
	ahmed
	10
	mohamed
	20
	ayman
	30
	yomna 
	40
	ibrhaimm
	50
	salma
	60
	yaseen
	70
	yazen
	80 
	marco
	90
	hs
	95
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
	char sName[100];
	int sRoll;
	float sMarks;
};

/*
	* This function to enter data from User 
	* Input : Roll number
	* Output : Return the stuct of student have the data
*/
struct Student EnterStudentData(int RollNumber);

/*
	* This function to display data to User 
	* Input : the stuct of student that have data to display
	* Output :print the student data
*/
void printStudentData(struct Student data);

int main(void)
{
	struct Student S_StudentData[10];
	int i;
	printf("Enter information of Students: \n\n");
	for (i = 0; i < 10; i++)
	{
		S_StudentData[i] = EnterStudentData(i);
	}
	printf("\nDisplaying Information of students\n\n");
	for (i = 0; i < 10; i++)
	{
		printStudentData(S_StudentData[i]);
	}
	
	return 0;
}


struct Student EnterStudentData(int RollNumber)
{
	struct Student data;
	printf("For roll Number %d\n",RollNumber + 1);
	data.sRoll = RollNumber + 1;
	printf("Enter Name : ");
	fflush(stdin);fflush(stdout);
	fgets(data.sName,100,stdin);
	data.sName[strlen(data.sName) - 1] = 0;
	printf("Enter Marks : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&data.sMarks);
	return data;
}

void printStudentData(struct Student data)
{
	printf("Information for roll number %d \n", data.sRoll);
	printf("name: %s \n", data.sName);
	printf("marks: %.01f \n",data.sMarks);
}