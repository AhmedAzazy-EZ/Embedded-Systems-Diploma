/*
 *	Mideterm1 >> Code7
 *
 *  Created on: Oct 24, 2021
 *      Author: Ahmed Azazy
 */

/*
7)c function to sum numbers from 1 to 100(without loop)? *
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

int RecusionSum(void )
{
	static int  range = 100;
	if(range == 0)
		return 0;

	return range-- + RecusionSum();
}

int main()
{
	printf("Sum of numbers from 0 to 100 = %d" , RecusionSum());
	return 0 ;
}










/*fflush(stdout) ; fflush(stdin);*/
