/*
 *	HomeWork5 >> EX1
 *
 *  Created on: Oct 25, 2021
 *      Author: Ahmed Azazy
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

struct Sstudent
{
	char name[50];
	int roll;
	float marks;
}student;


int main()
{
	printf("Enter information of students: \n\n");
	printf("Enter name: ");
	fflush(stdout) ; fflush(stdin);
	gets(student.name);
	printf("Enter roll number: ");
	fflush(stdout) ; fflush(stdin);
	scanf("%d" , &student.roll);
	printf("Enter marks: ");
	fflush(stdout) ; fflush(stdin);
	scanf("%f" , &student.marks);

	printf("\nDisplaying Information\n");
	printf("name: %s\n" , student.name );
	printf("Roll: %d\n" , student.roll );
	printf("Marks: %.3f\n" , student.marks );
	return 0 ;
}










/*fflush(stdout) ; fflush(stdin);*/
