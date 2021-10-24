/*
 *	Mideterm1 >> Code6
 *
 *  Created on: Oct 24, 2021
 *      Author: Ahmed Azazy
 */

/*
6)c function to return unique number in array with one loop? test case 1:
 input: int a[7]={4,2,5,2,5,7,4}; output:7.
 test case 2: input: int a[3]={4,2,4}; output:2. *
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

int UniqueNumber(int * arr , int len )
{
	int i ,hash[100] = {0};
	for(i = 0 ; i < len ; i++)
		hash[arr[i]]++;

	for(i = 0 ; i < 100 ; i++)
		if(hash[i] == 1)
			return i;

	return -1; /* -1 means No unique number */
}

int main()
{
	int arr[7]={4,2,5,2,5,7,4};

	printf("The unique Number is %d" , UniqueNumber(arr , (sizeof(arr) / sizeof(arr[0]))));
	return 0 ;
}










/*fflush(stdout) ; fflush(stdin);*/
