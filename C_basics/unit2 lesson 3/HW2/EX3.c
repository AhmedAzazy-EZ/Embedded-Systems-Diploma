/*
 * Homework2 >> EX3
 *
 *  Created on: Oct 21, 2021
 *      Author: Ahmed Azazy
 */


#include <stdio.h>
#include <math.h>
int main(void )
{
	float a , b, c;
	printf("Enter three numbers: ");
	fflush(stdout) ; fflush(stdin);
	scanf("%f %f %f" , &a , &b , &c);


	printf("Largest number = %.2f\n" , (a >b) ? ((a>c) ? a : c) : ((b>c) ? b : c) );
	return 0;
}









/*fflush(stdout) ; fflush(stdin);*/
