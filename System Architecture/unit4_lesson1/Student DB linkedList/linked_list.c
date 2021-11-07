/*
 * linked_list.c
 *
 *  Created on: Nov 7, 2021
 *      Author: PC
 */

#include "linked_list.h"
student_t * gp_FirstStudent = NULL;

linkedList_status List_AddItem()
{
	student_t * newItem = (student_t *) malloc(sizeof(student_t));

	/*check if malloc correctly located memory space for new student*/
	if(!newItem)
	{
		return LINKED_ERROR;
	}

	if(gp_FirstStudent == NULL)
	{
		gp_FirstStudent = newItem ;
		newItem->pNext = NULL;
		//Fill Student Data
		fillStudentData(newItem);

	}

	else
	{
		student_t * P_temp = gp_FirstStudent;
		while(P_temp->pNext)
		{
			P_temp = P_temp->pNext;
		}

		P_temp->pNext = newItem;
		newItem->pNext = NULL;
		//Fill Student Data
		fillStudentData(newItem);
	}

	return LINKED_NO_ERROR;
}


linkedList_status List_DeleteItem()
{

	if(gp_FirstStudent == NULL)
		return LINKED_ERROR;

	student_t * P_current = gp_FirstStudent ,* P_prev = NULL;
	char temp[40];
	int ID;
	DPRINTF("Enter Student ID to be deleted: \n");
	gets(temp);
	ID = atoi(temp);

	while(P_current)
	{
		if(P_current->student.ID == ID)
		{
			if(P_current == gp_FirstStudent)
			{
				gp_FirstStudent = P_current->pNext;
			}

			else
			{
				P_prev->pNext = P_current->pNext;
			}

			free(P_current);

			return LINKED_NO_ERROR ;
		}

		/*set P_prev and P_current to the next node*/
		P_prev = P_current;
		P_current = P_current->pNext;
	}

	return LINKED_ERROR;
}

void List_View()
{
	if(!gp_FirstStudent)
	{
		DPRINTF("=======================\n");
		DPRINTF("EMPTY LIST\n");
		return ;
	}

	student_t * temp = gp_FirstStudent;
	while(temp)
	{
		DPRINTF("=======================\n");
		DPRINTF("Student ID : %d\n" , temp->student.ID);
		DPRINTF("Student name : %s\n" , temp->student.name);
		DPRINTF("Student Height : %.2f\n" , temp->student.height);
		temp = temp->pNext;
	}
}

void fillStudentData(student_t * P_student)
{
	char temp[40];
	DPRINTF("Enter the ID: \n");
	gets(temp);
	P_student->student.ID = atoi(temp);
	DPRINTF("Enter Student Full Name: ");
	gets(P_student->student.name);
	DPRINTF("Enter Student Height: ");
	gets(temp);
	P_student->student.height = atof(temp);
}

void showOptions()
{
	DPRINTF("=====================\n");
	DPRINTF("chose Operation\n");
	DPRINTF("1 : Add student\n");
	DPRINTF("2 : Delete Student\n");
	DPRINTF("3 : View all students\n");
	DPRINTF("4 : Delete all students\n");
	DPRINTF("5 : Find length of List Recursively\n");
	DPRINTF("6 : Find specific node\n");
	DPRINTF("7 : Find specific node from end\n");
	DPRINTF("8 : Reverse list\n");
}

void List_DeletaAll()
{
	if(!gp_FirstStudent)
	{
		DPRINTF("=======================\n");
		DPRINTF("EMPTY LIST\n");
		return ;
	}

	student_t * next = gp_FirstStudent;
	student_t * current = gp_FirstStudent;
	while(next)
	{
		next = current->pNext;
		current->pNext = NULL;
		free(current);
		current = next;
		next = next->pNext;
	}

	gp_FirstStudent = NULL;
}


int List_RecursiveLength(student_t * P_first)
{
	if(!P_first)
		return 0;
	return 1 + List_RecursiveLength(P_first->pNext);
}

student_t * List_FindNode(int num)
{
	if(!gp_FirstStudent || num < 0)
		return NULL;

	student_t * temp = gp_FirstStudent ;
	int count = 0;
	while((count < num) && temp)
	{
		temp = temp->pNext;
		count++;
	}

	return temp;
}

student_t * List_FindNodeFromEnd(int num)
{
	if(!gp_FirstStudent || num < 0)
		return NULL;

	student_t * P_slow = gp_FirstStudent , * P_fast = gp_FirstStudent;
	int count ;
	while(1)
	{
		for(count = 0 ; count <= num ; count++)
		{

			P_fast = P_fast->pNext;
			if(count == num)
				P_slow = P_slow->pNext;
			if(P_fast == NULL)
			{
				return P_slow;
			}
		}

		if(!P_slow->pNext)
			return P_slow;
		P_slow = P_slow->pNext;
	}

}


void ListReverse()
{
	int List_length = List_RecursiveLength(gp_FirstStudent) , i = 1;
	student_t ** arr = (student_t **) malloc(sizeof(sizeof(student_t *) * List_length));
	student_t * temp = gp_FirstStudent;
	arr[0] = temp;
	/*fill the arr with nodes addresses*/
	while(i < List_length)
	{
		temp = temp->pNext;
		arr[i++] = temp;
	}

	i = List_length -1;
	while(i > 0)
	{
		arr[i]->pNext = arr[i-1];
		i--;
	}
	arr[0]->pNext = NULL;
	gp_FirstStudent = arr[List_length - 1];
}
