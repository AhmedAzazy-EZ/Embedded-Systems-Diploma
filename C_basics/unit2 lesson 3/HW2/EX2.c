/*
 * Homework2 >> EX2
 *
 *  Created on: Oct 21, 2021
 *      Author: Ahmed Azazy
 */


#include <stdio.h>
#include <math.h>
int main(void )
{
	char ch;
	printf("Enter an alphabet: ");
	fflush(stdout) ; fflush(stdin);
	scanf("%c" , &ch);

	switch(ch)
	{
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U':
		printf("%c is a vowl\n", ch);
		break;

	default :
		printf("%c is a constant\n" , ch);

	}
	return 0;
}









/*fflush(stdout) ; fflush(stdin);*/
