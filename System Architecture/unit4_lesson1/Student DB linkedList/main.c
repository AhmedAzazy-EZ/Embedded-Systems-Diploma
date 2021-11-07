/*
 * main.c
 *
 *  Created on: Nov 7, 2021
 *      Author: Ahmed Azazy
 */
#include "linked_list.h"
int op = 0;
int main(void)
{
	student_t * temp;
	while(1)
	{
		showOptions();
		scanf("%d" , &op);


		switch(op)
		{
		case 1 :
			List_AddItem();
			break;

		case 2 :
			List_DeleteItem();
			break;


		case 3 :
			List_View();
			break;

		case 4 :
			List_DeletaAll();
			break;

		case 5 :
			DPRINTF("List Length: %d\n" , List_RecursiveLength(gp_FirstStudent));
			break;

		case 6 :
			DPRINTF("Enter node number: ");
			scanf("%d" , &op);
			temp = List_FindNode(op);
			if(!temp) {DPRINTF("Not Found\n"); break;};
			DPRINTF("Student ID : %d\n" , temp->student.ID);
			DPRINTF("Student name : %s\n" , temp->student.name);
			DPRINTF("Student Height : %.2f\n" , temp->student.height);
			break;
		case 7 :
			DPRINTF("Enter node number: ");
			scanf("%d" , &op);
			temp = List_FindNodeFromEnd(op);
			if(!temp) {DPRINTF("Not Found\n"); break;};
			DPRINTF("Student ID : %d\n" , temp->student.ID);
			DPRINTF("Student name : %s\n" , temp->student.name);
			DPRINTF("Student Height : %.2f\n" , temp->student.height);
			break;

		case 8 :
			ListReverse();
			DPRINTF("=======DONE===========\n");
			break;

		default :
			DPRINTF("No valid options");

		}
	}
	return 0;
}

