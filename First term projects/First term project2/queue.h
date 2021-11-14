/*
 * queue.h
 *
 *  Created on: Nov 13, 2021
 *      Author: Ahmed Azazy
 */

#ifndef QUEUE_H_
#define QUEUE_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DPRINTF(...) {fflush(stdin);\
		fflush(stdout);\
		printf(__VA_ARGS__);\
		fflush(stdin);\
		fflush(stdout);}

//-------------------typedefs-----------------

typedef struct
{     // student information structure
	char fname[50];
	char lname[50];
	int roll;
	float GPA;
	int cid[5];
} student_t;


typedef struct
{
	student_t *head;
	student_t *tail;
	student_t *base;
	int counter;
	int length;
} queue_t;

typedef enum{
	QUEUE_NO_ERROR,
	QUEUE_FULL,
	QUEUE_EMPTY,
	QUEUE_NULL,
	QUEUE_ERROR
} queue_state_t;

typedef enum
{
	NAMES_AND_ROLL_ONLY ,
	ALL_DATA
}retrieve_t;


//-------------------------externs-------------------

//------------------------queue APIs------------------

queue_state_t queue_init(queue_t * queue , student_t * students , int length);
queue_state_t add_student_manually(queue_t * queue);
queue_state_t add_studentfile(queue_t * queue);
student_t * find_student_roll(queue_t * queue , int roll);
student_t * find_student_ByName(queue_t * queue , char * name);
student_t * find_students_ByCourseID(queue_t * queue , int courseID);
int total_students_num(queue_t * queue);
queue_state_t delete_student_ByRoll(queue_t * queue, int roll);
queue_state_t update_student_roll(queue_t * queue , int roll);


int check_duplicated_roll(queue_t * queue , int roll);
void show_students(queue_t * queue);
void show_individual(student_t * student , retrieve_t retrieve);
void queue_shift(queue_t * queue , student_t * student , int index);
#endif /* QUEUE_H_ */
