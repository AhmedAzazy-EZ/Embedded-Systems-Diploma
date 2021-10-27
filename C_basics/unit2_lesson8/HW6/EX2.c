/*
 *	HomeWork6 Pointers >> EX2
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
	int i = 0;
	char ch = 'A';
	char * Pch = &ch;
	for( ; i < 26 ; i++)
	{
		printf("%c " , *Pch + i);
	}
	return 0 ;
}










/*fflush(stdout) ; fflush(stdin);*/
