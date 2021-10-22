/*
 * Homework3 Arrays >> EX4
 *
 *  Created on: Oct 22, 2021
 *      Author: Ahmed Azazy
 */


#include <stdio.h>
int main()
{
	int n , i , element , location;
	printf("Enter no of elements: ");
	fflush(stdout) ; fflush(stdin);
	scanf("%d" , &n);
	int arr[n];
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d" , &arr[i]);
	}

	printf("Enter the element to be inserted: ");
	fflush(stdout) ; fflush(stdin);
	scanf("%d", &element);
	fflush(stdout) ; fflush(stdin);
	printf("Enter the location: ");
	fflush(stdout) ; fflush(stdin);
	scanf("%d" , &location);

	for(i = 0 ; i < n ; i++)
	{
		if( i == location-1)
			printf("%d    ",element);

		printf("%d    " , arr[i]);
	}
	return 0 ;
}










/*fflush(stdout) ; fflush(stdin);*/
