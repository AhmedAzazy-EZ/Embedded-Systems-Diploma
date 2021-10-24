/*
 *	Mideterm1 >> Code2
 *
 *  Created on: Oct 24, 2021
 *      Author: Ahmed Azazy
 */

/*
2)c function to take an integer number and calculate it's square root? test case 1: input:4 ->output:2.000
 test case 2: input:10 ->output:3.126 *
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

float SquareRoot(int num)
{
	return sqrt(num);
}

int main()
{
	int num;
	printf("Enter a number: ");
	fflush(stdout) ; fflush(stdin);
	scanf("%d" , &num);
	printf("Square root of num %d = %.3f" , num , SquareRoot(num));
	return 0 ;
}










/*fflush(stdout) ; fflush(stdin);*/
