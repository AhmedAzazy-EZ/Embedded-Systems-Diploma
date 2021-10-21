/*
 * Home_work-1 >> EX2
 *
 *  Created on: Oct 21, 2021
 *      Author: Ahmed Azazy
 */


#include "stdio.h"

int main(void )
{
	int user_in1 , user_in2;
	printf("Enter two integers: ");
	fflush(stdout); fflush(stdin);
	scanf("%d\n%d" , &user_in1 , &user_in2);
	printf("Sum: %d" , user_in1 + user_in2);
	return 0;
}

