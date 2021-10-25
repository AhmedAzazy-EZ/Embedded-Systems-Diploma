/*
 *	HomeWork5 >> EX2
 *
 *  Created on: Oct 25, 2021
 *      Author: Ahmed Azazy
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

struct Sdistance
{
	int feet;
	float inch;
}distance1 , distance2;

struct Sdistance ReadDistance(void )
{
	struct Sdistance distance;
	printf("Enter feet: ");
	fflush(stdout) ; fflush(stdin);
	scanf("%d" , &distance.feet);
	printf("Enter inch: ");
	fflush(stdout) ; fflush(stdin);
	scanf("%f" , &distance.inch);
	return distance;
}

void printSum(struct Sdistance d1 , struct Sdistance d2)
{
	int feet = d1.feet + d2.feet;
	float inch = d1.inch + d2.inch;
	feet+= (inch/12);

	/*
	 * eliminate the integer part as it's already added to the feet
	 */
	inch -= floor(inch);
	printf("Sum of distance= %d\'-%.1f\"", feet , inch);
}
int main()
{
	printf("Enter information for 1st distance: \n");
	fflush(stdout) ; fflush(stdin);
	distance1 = ReadDistance();
	printf("\n\nEnter information for 1st distance: \n");
	distance2 = ReadDistance();
	printSum(distance1 , distance2);
	return 0 ;
}










/*fflush(stdout) ; fflush(stdin);*/
