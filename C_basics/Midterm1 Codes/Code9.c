/*
 *	Mideterm1 >> Code9
 *
 *  Created on: Oct 24, 2021
 *      Author: Ahmed Azazy
 */

/*
9)c function to reverse words in string? test case : input:
mohamed gamal. output:gamal mohamed.
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

void ReverseWords(char * str)
{
	char buffer[1000];
	int i ,index1 , trackBuffer = 0;
	for(i = strlen(str) - 1 ; str[i] ; i--)
	{
		if(str[i] == ' ')
		{
			index1 = i+1;
			for(; str[index1]!= ' ' && str[index1] != '\0' ; index1++)
			{
				buffer[trackBuffer++] = str[index1];
			}
			buffer[trackBuffer++] = ' ';
		}

		if(i == 0)
		{
			int i=0;
			for(; str[i]!=' ' ;i++)
				buffer[trackBuffer++] = str[i];
		}

	}

	strcpy(str , buffer);
}

int main()
{
	char words[100] = "Ahmed Azazy Mohamed";
	printf("Input string is: \"%s\"" , words);
	ReverseWords(words);
	printf("\nAfter word reverse: \"%s\"" , words);
	return 0 ;
}










/*fflush(stdout) ; fflush(stdin);*/
