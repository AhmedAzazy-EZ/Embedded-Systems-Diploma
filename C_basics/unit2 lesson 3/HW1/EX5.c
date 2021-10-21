/*
 * Home_work-1 >> EX5
 *
 *  Created on: Oct 21, 2021
 *      Author: Ahmed Azazy
 */


#include "stdio.h"

int main(void )
{
	char ch;
	printf("Enter a character: ");
	fflush(stdout); fflush(stdin);
	scanf("%c" , &ch);
	printf("ASCII value of %c = %d\n" , ch , ch);
	return 0;
}

