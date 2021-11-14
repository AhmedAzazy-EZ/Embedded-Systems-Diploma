/*
 * main.c
 *
 *  Created on: Nov 13, 2021
 *      Author: Ahmed Azazy
 */
#include "queue.h"
student_t students[100];
queue_t queue;

int main(void )
{

	int temp;
	char _user_input[100];
	student_t * result;
	queue_init(&queue , students , 100);

	DPRINTF("Welcome to the Student Management System\n");
	while(1)
	{
		DPRINTF("--------------------------------------------\n");
		DPRINTF("Choose The Task that you want to perform\n");
		DPRINTF("1. Add the Student Details Manually\n");
		DPRINTF("2. Add the Student Details From Text File\n");
		DPRINTF("3. Find the Student Details by Roll Number\n");
		DPRINTF("4. Find the Student Details by First Name\n");
		DPRINTF("5. Find the Student Details by Course ID\n");
		DPRINTF("6. Find the Total number of Students\n");
		DPRINTF("7. Delete the Student Details by Roll Number \n");
		DPRINTF("8. Update the Student Details by Roll Number \n");
		DPRINTF("9. Show all information\n");
		DPRINTF("10. Exit\n");
		DPRINTF(" Enter your choice to perform the task\n");
		scanf("%d",&temp);
		switch(temp)
		{
		case 1 :
		{
			add_student_manually(&queue);
			break;
		}
		case 2 :
		{
			add_studentfile(&queue);
			break;
		}
		case 3 :
		{
			DPRINTF("Enter Roll Number: ");
			gets(_user_input);
			result = find_student_roll(&queue , atoi(_user_input) );
			if(result == NULL)
				{DPRINTF("[ERROR] , Roll num is not found\n");}

			else
				show_individual(result , ALL_DATA);

			break;
		}
		case 4 :
		{
			DPRINTF("Enter student first name: ");
			gets(_user_input);
			find_student_ByName(&queue, _user_input);
			break;
		}
		case 5 :
		{
			DPRINTF("Enter Course ID: ");
			gets(_user_input);
			find_students_ByCourseID(&queue , atoi(_user_input));
			break;
		}
		case 6 :
		{
			total_students_num(&queue);
			break;
		}
		case 7 :
		{
			DPRINTF("Enter student Roll number: ");
			gets(_user_input);
			delete_student_ByRoll(&queue, atoi(_user_input));
			break;
		}
		case 8 :
		{
			DPRINTF("Enter student roll to be updated: ");
			gets(_user_input);
			update_student_roll(&queue, atoi(_user_input));
			break;
		}
		case 9 :
		{
			show_students(&queue);
			break;
		}

		case 10 :
			exit(1);
		default :
		{
			DPRINTF("Invalid choice\n");

		}
	}
}
}



