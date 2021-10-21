/*
 * Home_work-1 >> EX4
 *
 *  Created on: Oct 21, 2021
 *      Author: Ahmed Azazy
 */


#include "stdio.h"

int main(void )
{
	float user_in1 , user_in2;
	printf("Enter two integers: ");
	fflush(stdout); fflush(stdin);
	scanf("%f\n%f" , &user_in1 , &user_in2);
	printf("Product: %f" , user_in1 * user_in2);
	return 0;
}

