/*
 * Homework4 >> EX2
 *
 *  Created on: Oct 23, 2021
 *      Author: Ahmed Azazy
 */


#include <stdio.h>
#include <stdint.h>

int factorial(int f)
{
	if(f == 1)
		return 1;
	else
		return (f--)*factorial(f);
}

int main()
{
	int f;
	printf("Enter a positive number: ");
	fflush(stdout) ; fflush(stdin);
	scanf("%d" , &f);
	if(f > 0)
		printf("factorial of %d = %d" ,f , factorial(f));
	else
		printf("not valid input\n");
	return 0 ;
}










/*fflush(stdout) ; fflush(stdin);*/
