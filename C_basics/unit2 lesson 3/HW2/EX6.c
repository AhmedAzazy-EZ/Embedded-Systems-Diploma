/*
 * Homework2 >> EX6
 *
 *  Created on: Oct 21, 2021
 *      Author: Ahmed Azazy
 */


#include <stdio.h>
#include <math.h>
int main(void )
{
	int user_in , sum = 0;
	printf("Enter an integer: ");
	fflush(stdout) ; fflush(stdin);
	scanf("%d" , &user_in);
	while(user_in)
	{
		sum+=user_in;
		user_in--;
	}
	printf("Sum = %d", sum);
	return 0;
}









/*fflush(stdout) ; fflush(stdin);*/
