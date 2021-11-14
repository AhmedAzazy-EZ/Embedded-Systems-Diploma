/*
 * queue.c
 *
 *  Created on: Nov 13, 2021
 *      Author: Ahmed Azazy
 */

#include "queue.h"

queue_state_t queue_init(queue_t * queue , student_t * students , int length)
{
	//check if passed queue is not null
	if(queue == NULL || students == NULL)
	{
		DPRINTF("Invalid Database");
		return QUEUE_NULL;
	}

	queue->base = students;
	queue->head = students;
	queue->tail = students;
	queue->counter = 0;
	queue->length = length;

	return QUEUE_NO_ERROR;
}


queue_state_t add_student_manually(queue_t * queue)
{

	//check if passed queue is not null
	if(queue == NULL)
	{
		DPRINTF("Invalid Database");
		return QUEUE_NULL;
	}

	//check if QUEUE is full
	if(queue->counter == queue->length)
	{
		DPRINTF("[ERROR] , Database is full");
		return QUEUE_FULL;
	}

	char temp[100] ;
	int temp_roll , roll;

	//get the roll Num of the student
	DPRINTF("Enter the Roll number: ");
	gets(temp);
	roll = atoi(temp);
	//check if the roll Num is not duplicated
	temp_roll = check_duplicated_roll(queue , atoi(temp));
	if(temp_roll == -1)
	{
		DPRINTF("[ERROR] , Duplicated %d roll number\n" , roll);
		DPRINTF("=============Aborting==============\n");
		return QUEUE_ERROR;
	}
	queue->head->roll = temp_roll;

	//get the first name
	DPRINTF("Enter the first name of student: ");
	gets(queue->head->fname);

	//get the second name
	DPRINTF("Enter the second name of student: ");
	gets(queue->head->lname);

	//get the GPA
	DPRINTF("Enter the student GPA: ");
	gets(temp);
	queue->head->GPA = atof(temp);

	//get the registered courses IDs
	DPRINTF("Enter the number of Courses to register: ");
	gets(temp);
	temp_roll = atoi(temp);
	//check if the enetered num of courses is bigger than 5
	if(temp_roll > 5)temp_roll = 5;
	for(int i = 0 ; i < temp_roll ; i++)
	{
		DPRINTF("Course %d id: " , i+1);
		gets(temp);
		queue->head->cid[i] = atoi(temp);
	}

	queue->head++;
	queue->counter++;
	DPRINTF("[INFO] , student number %d added successfully \n" , roll);
	return QUEUE_NO_ERROR;
}


queue_state_t add_studentfile(queue_t * queue  )
{
	//check if passed queue is not null
	if(queue == NULL)
	{
		DPRINTF("Invalid Database");
		return QUEUE_NULL;
	}

	//check if QUEUE is full
	if(queue->counter == queue->length)
	{
		DPRINTF("[ERROR] , Database is full");
		return QUEUE_FULL;
	}

	int temp_roll=0 , roll;
	char _user_in[100];
	DPRINTF("Enter the file name with the extension: ");
	gets(_user_in);
	FILE * filePointer = fopen(_user_in , "r");

	//check if the file is correctly opened
	if(filePointer == NULL)
	{
		DPRINTF("[ERROR] , file is not exist\n");
		return QUEUE_ERROR;
	}

	char c = 'n';

	//start file reading
	while(c != EOF)
	{
	fscanf(filePointer , "%d" , &temp_roll );
	roll = temp_roll;
	//check if the roll num is not dublicated
	temp_roll = check_duplicated_roll(queue , temp_roll);
	if(temp_roll == -1)
	{
		DPRINTF("[ERROR] , Duplicated %d roll number\n" , roll);
		DPRINTF("=============Aborting==============\n");
		//ignore the current line
		fscanf(filePointer, "%*[^\n]");
		//check if the control stops at the EOF
		c = getc(filePointer);
		if(c == EOF)
			return QUEUE_NO_ERROR;
		else
			continue;
	}
	queue->head->roll = temp_roll;

	fscanf(filePointer ,"%s"  , queue->head->fname);
	fscanf(filePointer, "%s" , queue->head->lname);
	fscanf(filePointer ,"%f" , &queue->head->GPA);

	for(int i = 0 ; i < 5 ; i ++)
	{
		fscanf(filePointer , "%d" , &queue->head->cid[i]);
	}

	queue->head++;
	queue->counter++;
	DPRINTF("[INFO] , student number %d added successfully \n" , roll);
	c = getc(filePointer);
	}
	return QUEUE_NO_ERROR;
}

student_t * find_student_roll(queue_t * queue , int roll)
{
	//check if passed queue is not null
	if(queue == NULL)
	{
		DPRINTF("Invalid Database");
		return NULL;
	}

	student_t * temp = queue->base;
	for(int i = 0 ; i < queue->counter ; i++)
	{
		if(temp->roll == roll)
		{
			return temp;
		}
		temp++;
	}

	return NULL;
}

student_t * find_student_ByName(queue_t * queue , char * name)
{
	//check if passed queue is not null
	if(queue == NULL)
	{
		DPRINTF("Invalid Database");
		return NULL;
	}

	int i = 0 , counter = 0;
	student_t * temp = queue->base;
	for(; i < queue->counter ; i++)
	{
		if(!strcmpi(temp->fname , name))
		{
			show_individual(temp , ALL_DATA);
			counter++;
		}
		temp++;
	}

	DPRINTF("-------------------------\n");
	DPRINTF("[INFO] , Number of found students is %d\n" , counter);
	return NULL;
}


student_t * find_students_ByCourseID(queue_t * queue , int courseID)
{
	//check if passed queue is not null
	if(queue == NULL)
	{
		DPRINTF("Invalid Database");
		return NULL;
	}

	int i = 0 , counter = 0;
	student_t * temp = queue->base;
	for(; i < queue->counter ; i++)
	{
		for(int j = 0 ; j < 5 ; j++)
		{
			if(temp->cid[j] == courseID)
			{
				show_individual(temp , NAMES_AND_ROLL_ONLY);
				counter++;
				break;
			}
		}

		temp++;
	}

	DPRINTF("-------------------------\n");
	DPRINTF("[INFO] , Number of found students is %d\n" , counter);


	return NULL;
}

int total_students_num(queue_t * queue)
{
	if(queue == NULL)
	{
		DPRINTF("Invalid Database");
		return 0;
	}
	DPRINTF("-------------------------\n");
	DPRINTF("[INFO] , total number of students= %d\n" , queue->counter);
	DPRINTF("[INFO] , you can add up to %d\n" , queue->length);
	DPRINTF("[INFO] , you can add %d more students\n" , queue->length - queue->counter);

	return queue->counter;
}

queue_state_t delete_student_ByRoll(queue_t * queue , int roll)
{
	//check if passed queue is not null
	if(queue == NULL)
	{
		DPRINTF("Invalid Database");
		return QUEUE_NULL;
	}

	int i = 0 ;
	student_t * temp = queue->base;
	for( ; i < queue->counter ; i++)
	{
		if(temp->roll == roll)
		{
			queue_shift(queue , temp , i);
			DPRINTF("[INFO] , Deletion is done\n");
			queue->counter--;
			queue->head--;
			return QUEUE_NO_ERROR;
		}
		temp++;
	}

	DPRINTF("[ERROR] , this roll %d is not found\n" , roll);
	return QUEUE_NULL;
}

queue_state_t update_student_roll(queue_t * queue , int roll)
{
	//check if passed queue is not null
	if(queue == NULL)
	{
		DPRINTF("Invalid Database");
		return QUEUE_NULL;
	}

	student_t * temp = find_student_roll(queue, roll);
	if(temp == NULL)
	{
		DPRINTF("[ERROR] , this roll %d is not found\n" , roll);
		return QUEUE_NULL;
	}

	int option=0;
	char _user_in[100];
	DPRINTF("-------------------------\n");
	DPRINTF("1. first name\n");
	DPRINTF("2. last name\n");
	DPRINTF("3. roll no\n");
	DPRINTF("4. GPA\n");
	DPRINTF("5. Courses\n");
	DPRINTF("6. Exit update\n");
	gets(_user_in);
	option = atoi(_user_in);
	switch(option)
	{
	case 1 :
		DPRINTF("Enter the first name: ");
		gets(_user_in);
		strcpy(temp->fname , _user_in);
		break;

	case 2 :
		DPRINTF("Enter the second name: ");
		gets(_user_in);
		strcpy(temp->lname , _user_in);
		break;

	case 3 :
		DPRINTF("Enter the new Roll number: ");
		gets(_user_in);
		temp->roll = atoi(_user_in);
		break;

	case 4 :
		DPRINTF("Enter the new GPA: ");
		gets(_user_in);
		temp->GPA = atof(_user_in);
		break;

	case 5 :
		DPRINTF("Enter the number of Courses: ");
		gets(_user_in);
		option = atoi(_user_in);
		//check if the enetered num of courses is bigger than 5
		if(option > 5)option = 5;
		for(int c = 0 ; c < option ; c++)
		{
			DPRINTF("Course %d id: " , c+1);
			gets(_user_in);
			queue->head->cid[c] = atoi(_user_in);
		}
		break;

	case 6 :
		break;

	default :
		DPRINTF("[ERROR] , Invalid option\n");
	}

	return QUEUE_NO_ERROR;
}

void queue_shift(queue_t * queue , student_t * student , int index)
{

	student_t * temp = student+1;
	for(int i = index ; i < (queue->counter - 1) ; i++)
	{
		student->GPA = temp->GPA;
		student->roll = temp->roll;
		strcpy(student->fname , temp->fname);
		strcpy(student->lname , temp->lname);
		for(int j = 0 ; j < 5 ; j++)
		{
			student->cid[j] = temp->cid[j];
		}
		student++;
		temp++;
	}
}

int check_duplicated_roll(queue_t * queue , int roll)
{
	student_t * temp = queue->base;
	for(int i = 0 ; i < queue->counter ; i++)
	{
		if(temp->roll == roll)
		{
			return -1;
		}

		temp++;
	}

	return roll;
}


void show_individual(student_t * temp , retrieve_t retrieve)
{
	if(temp == NULL)
	{
		DPRINTF("[ERROR] , Invalid Student\n");
		return;
	}

	DPRINTF("-------------------------\n");
	DPRINTF("student roll number: %d\n" , temp->roll);
	DPRINTF("student first name: %s\n" , temp->fname);
	DPRINTF("student second name: %s\n" , temp->lname);
	if(retrieve == NAMES_AND_ROLL_ONLY)
		return;
	DPRINTF("student GPA: %.2f\n" , temp->GPA);
	for(int x= 0 ; x < 5 ; x++)
	{
		DPRINTF("Registered course%d ID: %d\n" , x+1 , temp->cid[x]);
	}
}

void show_students(queue_t * queue)
{

	//check if passed queue is not null
	if(queue == NULL)
	{
		DPRINTF("Invalid Database");
		return;
	}
	student_t * temp = queue->base;
	int i = 0;
	for( ; i < queue->counter ; i++)
	{
		show_individual(temp , ALL_DATA);
		temp++;
	}
}
