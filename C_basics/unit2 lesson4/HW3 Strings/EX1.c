/*
 * Homework3 Strings >> EX1
 *
 *  Created on: Oct 22, 2021
 *      Author: Ahmed Azazy
 */


#include <stdio.h>
#include <string.h>
char string[1000] , ch;
int frequency[26]; /*represent the English alphabets*/
int main()
{
	int i ;
	printf("Enter a string: ");
	fflush(stdout) ; fflush(stdin);
	gets(string);
	printf("Enter a character to find frequency: ");
	fflush(stdout) ; fflush(stdin);
	scanf("%c" , &ch);
	for(i = 0 ; string[i] ; i++)
	{
		frequency[string[i] - 'a']++;
	}

	printf("Frequency of %c = %d", ch , frequency[ch - 'a']);
	return 0 ;
}










/*fflush(stdout) ; fflush(stdin);*/
