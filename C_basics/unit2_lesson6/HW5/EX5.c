/*
 *	HomeWork5 >> EX5
 *
 *  Created on: Oct 25, 2021
 *      Author: Ahmed Azazy
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

#define PI 3.14
#define CIRCLE_AREA(x) ((float)PI*x*x)


int main()
{

	float rad;
	printf("Enter the radius: ");
	fflush(stdout) ; fflush(stdin);
	scanf("%f" , &rad);
	printf("Area=%.2f" , CIRCLE_AREA(rad));
	return 0 ;
}










/*fflush(stdout) ; fflush(stdin);*/
