/*
 * Homework3 Strings >> EX3
 *
 *  Created on: Oct 22, 2021
 *      Author: Ahmed Azazy
 */


#include <stdio.h>
#include <string.h>
char string[1000];
int main()
{
	int i , len;
	printf("Enter a string: ");
	fflush(stdout) ; fflush(stdin);
	gets(string);
	len = strlen(string);
	printf("Reverse string is: ");
	for(i = len-1 ; i >= 0 ; i-- )
	{
		printf("%c" , string[i]);
	}
	return 0 ;
}










/*fflush(stdout) ; fflush(stdin);*/
