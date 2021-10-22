/*
 * Homework3 Strings >> EX2
 *
 *  Created on: Oct 22, 2021
 *      Author: Ahmed Azazy
 */


#include <stdio.h>
#include <string.h>
char string[1000];
int main()
{
	int i ;
	printf("Enter a string: ");
	fflush(stdout) ; fflush(stdin);
	gets(string);
	for(i = 0 ; string[i] ; i++){}
	printf("Length of string: %d", i);
	return 0 ;
}










/*fflush(stdout) ; fflush(stdin);*/
