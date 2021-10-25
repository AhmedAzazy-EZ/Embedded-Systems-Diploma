/*
 *	HomeWork5 >> EX4
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

void readnStudents(struct Sstudent arr[] , int len)
{
	int i = 0;
	printf("Enter information of students: \n\n");
	for( ; i < len ; i++)
	{
		printf("For roll %d\n" , arr[i].roll = i+1);
		printf("Enter name: ");
		fflush(stdout) ; fflush(stdin);
		gets(arr[i].name);
		printf("Enter marks: ");
		fflush(stdout) ; fflush(stdin);
		scanf("%f" , &arr[i].marks);
		printf("\n");
	}
}

void printnStudents(struct Sstudent arr[] , int len)
{
	int i = 0 ;
	printf("Displaying information of students: \n\n");
	for( ; i < len ;i++)
	{
		printf("Information for roll number %d:\n" , arr[i].roll);
		printf("Name: %s\n" , arr[i].name );
		printf("Marks: %.3f\n" , arr[i].marks );

	}
}

int main()
{
	struct Sstudent students[10];
	readnStudents(students , 10);
	printnStudents(students , 10);
	return 0 ;
}










/*fflush(stdout) ; fflush(stdin);*/
