/*
 * linked_list.h
 *
 *  Created on: Nov 7, 2021
 *      Author: Ahmed Azazy
 */

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define DPRINTF(...)	{\
						fflush(stdin);fflush(stdout);\
						printf(__VA_ARGS__);\
						fflush(stdin);fflush(stdout);}

/*---------------typedefs-------------*/

typedef struct
{
	int ID ;
	char name[40];
	float height;
}S_Data;

typedef struct Student student_t;

struct Student
{
	S_Data student;
	struct Student * pNext;
};

typedef enum
{
	LINKED_NO_ERROR ,
	LINKED_ERROR
}linkedList_status;
/*--------------Externs--------------*/

extern student_t * gp_FirstStudent;

/*---------------linked List APIs---------*/

linkedList_status List_AddItem();
linkedList_status List_DeleteItem();
void List_View();
void fillStudentData(student_t * );
void showOptions();
void List_DeletaAll();
int List_RecursiveLength();
student_t * List_FindNode(int num);
student_t * List_FindNodeFromEnd(int num);
void ListReverse();

#endif /* LINKED_LIST_H_ */
