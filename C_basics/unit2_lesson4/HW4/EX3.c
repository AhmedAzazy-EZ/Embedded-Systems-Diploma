/*
 * Homework4 >> EX3
 *
 *  Created on: Oct 23, 2021
 *      Author: Ahmed Azazy
 */


#include <stdio.h>
#include <stdint.h>
#include <string.h>

void ReverseStr(char * str , int len)
{
	if(len == 0)
		return ;

	len--;
	printf("%c" , str[len]);
	ReverseStr(str , len);
}

int main()
{
	char str[1000];
	printf("Enter a sentence: ");
	fflush(stdout) ; fflush(stdin);
	gets(str);
	ReverseStr(str , strlen(str));
	return 0 ;
}










/*fflush(stdout) ; fflush(stdin);*/
