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
	Adele
	21
	334.5
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
	* Input : void
	* Output : Return the stuct of student have the data
*/
struct Student EnterStudentData(void);

/*
	* This function to display data to User 
	* Input : the stuct of student that have data to display
	* Output :print the student data
*/
void printStudentData(struct Student data);

int main(void)
{
	struct Student S_StudentData;
	printf("Enter information of Students: \n\n");
	S_StudentData = EnterStudentData();
	printf("\nDisplaying Information of students\n\n");
	printStudentData(S_StudentData);
	
	return 0;
}


struct Student EnterStudentData(void)
{
	struct Student data;
	printf("Enter Name : ");
	fflush(stdin);fflush(stdout);
	fgets(data.sName,100,stdin);
	data.sName[strlen(data.sName) - 1] = 0;
	printf("Enter roll : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&data.sRoll);
	printf("Enter Marks : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&data.sMarks);
	return data;
}

void printStudentData(struct Student data)
{
	printf("name: %s \n", data.sName);
	printf("roll : %d \n", data.sRoll);
	printf("marks: %.01f \n",data.sMarks);
}