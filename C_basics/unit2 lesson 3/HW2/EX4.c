/*
 * Homework2 >> EX4
 *
 *  Created on: Oct 21, 2021
 *      Author: Ahmed Azazy
 */


#include <stdio.h>
#include <math.h>
int main(void )
{
	float a ;
	printf("Enter a number: ");
	fflush(stdout) ; fflush(stdin);
	scanf("%f" , &a);


	if(a > 0 )
		printf("%.2f is positive\n" , a);
	else if(a < 0)
		printf("%.2f is negative\n" , a);
	else
		printf("You entered zero\n");
	return 0;
}









/*fflush(stdout) ; fflush(stdin);*/
