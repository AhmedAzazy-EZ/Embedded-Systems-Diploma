/*
 * Homework3 Arrays >> EX2
 *
 *  Created on: Oct 22, 2021
 *      Author: Ahmed Azazy
 */


#include <stdio.h>
int main()
{
	int n , i;
	printf("Enter the numbers of data: ");
	fflush(stdout) ; fflush(stdin);
	scanf("%d",&n);
	float data[n] , average;
	for(i = 0 ; i < n ; i++)
	{
		printf("%d. Enter number: ",i+1);
		fflush(stdout) ; fflush(stdin);
		scanf("%f",&data[i]);
		average+=data[i];
	}

	printf("Average = %.2f" , average/n);

	return 0 ;
}










/*fflush(stdout) ; fflush(stdin);*/
