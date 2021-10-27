/*
 *	HomeWork6 Pointers >> EX3
 *
 *  Created on: Oct 27, 2021
 *      Author: Ahmed Azazy
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

void reverseString(char * str , int len)
{
	char temp;
	int i = 0 ;
	for(; i < len/2 ; i++)
	{
		temp = str[i];
		str[i] = str[len-i-1];
		str[len - i - 1] = temp;
	}
}

int main()
{
	char word[] = "w3resource";
	reverseString(word , strlen(word));
	printf("%s" , word);
	return 0 ;
}










/*fflush(stdout) ; fflush(stdin);*/
