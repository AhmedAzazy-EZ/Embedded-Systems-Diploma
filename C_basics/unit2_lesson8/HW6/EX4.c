/*
 *	HomeWork6 Pointers >> EX4
 *
 *  Created on: Oct 27, 2021
 *      Author: Ahmed Azazy
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

void printInReverse(int * arr , int len)
{
	printf("The elements of array in reverse order are : \n");
	while(len--)
	{
		printf("element-%d : %d\n", len+1 , arr[len]);
	}
}

int main()
{
	int arr[15] , numOfelements , i =0;
	printf("Input the number of elements to store in the array (max 15) : ");
	fflush(stdout) ; fflush(stdin);
	scanf("%d" , &numOfelements);
	printf("Input %d number of elements in the array : \n" , numOfelements);
	for( ; i < numOfelements ; i++)
	{
		printf("element-%d: ", i+1);
		fflush(stdout) ; fflush(stdin);
		scanf("%d" , &arr[i]);
	}
	printInReverse(arr , numOfelements);
	return 0 ;
}










/*fflush(stdout) ; fflush(stdin);*/
