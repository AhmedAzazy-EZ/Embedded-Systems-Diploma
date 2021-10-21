/*
 * Homework2 >> EX5
 *
 *  Created on: Oct 21, 2021
 *      Author: Ahmed Azazy
 */


#include <stdio.h>
#include <math.h>
int main(void )
{
	char ch;
	printf("Enter a Character: ");
	fflush(stdout) ; fflush(stdin);
	scanf("%c" , &ch);

	/*check if character lay in the range of ASCII Alphabets*/
	if((ch>=65 && ch <=90) || (ch>=97 && ch<=122) )
		printf("%c is an alphabet\n" ,ch);
	else
		printf("%c is not an alphabet\n" ,ch);

	return 0;
}









/*fflush(stdout) ; fflush(stdin);*/
