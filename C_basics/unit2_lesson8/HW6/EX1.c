/*
 *	HomeWork6 Pointers >> EX1
 *
 *  Created on: Oct 27, 2021
 *      Author: Ahmed Azazy
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

int main()
{
	int m = 29 , *ab;
	printf("Address of m : 0x%x\n" , &m);
	printf("Value of m : %d\n" , m);

	ab = &m;
	printf("\nNow ab is assigned with the address of m. \n");
	printf("Address of pointer ab : 0x%x\n" , &ab);
	printf("Content of pointer ab : %d\n" , m);

	m = 34;
	printf("\nThe value of m assigned to 34 now.\n");
	printf("Address of pointer ab : 0x%x\n" , &ab);
	printf("Content of pointer ab : %d\n" , *ab);

	*ab = 7;
	printf("\nThe pointer variable ab is assigned with the value 7 now.\n");
	printf("Address of m : 0x%x\n" , &m);
	printf("Value of m : %d" , m);
	return 0 ;
}










/*fflush(stdout) ; fflush(stdin);*/
