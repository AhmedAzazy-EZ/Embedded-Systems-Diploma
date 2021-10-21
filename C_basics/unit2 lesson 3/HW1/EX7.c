/*
 * Home_work-1 >> EX7
 *
 *  Created on: Oct 21, 2021
 *      Author: Ahmed Azazy
 */


#include <stdio.h>
#include <math.h>
int main(void )
{
	int a , b;
	printf("Enter value of a : ");
	fflush(stdin); fflush(stdout);
	scanf("%d" , &a);
	printf("Enter value of b : ");
	fflush(stdin); fflush(stdout);
	scanf("%d" , &b);

	a+=b;
	b = abs(a-b);
	a = abs(b-a);

	printf("After swapping, value of a = %d\n" , a);
	printf("After swapping, value of b = %d\n" , b);
	return 0;
}

