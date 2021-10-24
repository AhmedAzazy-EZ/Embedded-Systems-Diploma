/*
 *	Mideterm1 >> Code5
 *
 *  Created on: Oct 24, 2021
 *      Author: Ahmed Azazy
 */

/*
5)c function to count number of ones in binary number? test case 1:
 input:5 ->output: 2 --->binary of 5 is 0101 so has 2 one's test case 2:
  input:15 ->output:4. *
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

int CountBinaryOnes(int num)
{
	int numOfOnes = 0 , i;

	for(i = 0 ; i <=31 ; i++)
		if(num&(1<<i))
			numOfOnes++;

	return numOfOnes;
}

int main()
{
	int num;
	printf("Enter a numbers: ");
	fflush(stdout) ; fflush(stdin);
	scanf("%d" , &num);
	printf("%d" , CountBinaryOnes(num));
	return 0 ;
}










/*fflush(stdout) ; fflush(stdin);*/
