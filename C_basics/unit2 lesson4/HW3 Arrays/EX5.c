/*
 * Homework3 Arrays >> EX5
 *
 *  Created on: Oct 22, 2021
 *      Author: Ahmed Azazy
 */


#include <stdio.h>
int main()
{
	int n , i , element;
	printf("Enter no of elements: ");
	fflush(stdout) ; fflush(stdin);
	scanf("%d", &n);
	int arr[n];
	for(i = 0 ; i < n ; i++)
		scanf("%d" , &arr[i]);

	printf("Enter the element to be searched: ");
	fflush(stdout) ; fflush(stdin);
	scanf("%d", &element);

	for(i = 0 ; i < n ; i++)
	{
		if(arr[i] == element)
		{
			printf("Number found at the location = %d\n" , i+1);
			break;
		}
	}

	if( i > n)
		printf("Element is not found\n");
	return 0 ;
}










/*fflush(stdout) ; fflush(stdin);*/
