/*
 *	Mideterm1 >> Code8
 *
 *  Created on: Oct 24, 2021
 *      Author: Ahmed Azazy
 */

/*
8)c function to take an array and revers its elements? test case 1:
input: int a[5]={1,2,3,4,5}; output:5 4 3 2 1. *
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

void ReverseArray(int * arr , int len)
{

	int temp , i;
	for(i = 0 ; i < len/2 ;i++)
	{
		temp = arr[i];
		arr[i] = arr[len - 1 - i];
		arr[len - 1 - i] = temp;
	}
}

int main()
{
	int i , arr[5]={1,2,3,4,5};
	printf("Before Reverse: ");
	for( i = 0 ; i < 5 ; i++)
		printf("%d ",arr[i]);

	ReverseArray(arr , 5);
	printf("\nAfter Reverse: ");
	for( i = 0 ; i < 5 ; i++)
		printf("%d ",arr[i]);
	return 0 ;
}










/*fflush(stdout) ; fflush(stdin);*/
