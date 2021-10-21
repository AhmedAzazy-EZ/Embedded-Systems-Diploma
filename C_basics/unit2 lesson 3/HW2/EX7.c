/*
 * Homework2 >> EX7
 *
 *  Created on: Oct 21, 2021
 *      Author: Ahmed Azazy
 */


#include <stdio.h>
#include <math.h>
int main(void )
{
	int user_in , factorial = 1;
	printf("Enter an integer: ");
	fflush(stdout) ; fflush(stdin);
	scanf("%d" , &user_in);

	if(user_in >= 0)
	{
		while(user_in)
		{
			factorial*=user_in;
			user_in--;
		}

		printf("Factorial = %d" , factorial);
	}
	else
		printf("Error!!! Factorial of negative number dosen't exist.\n");
	return 0;
}









/*fflush(stdout) ; fflush(stdin);*/
