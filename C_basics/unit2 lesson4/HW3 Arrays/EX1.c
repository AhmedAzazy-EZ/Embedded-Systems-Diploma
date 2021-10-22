/*
 * Homework3 Arrays >> EX1
 *
 *  Created on: Oct 22, 2021
 *      Author: Ahmed Azazy
 */


#include <stdio.h>
int main()
{
	int i , j;
	float matrix1[2][2] , matrix2[2][2];
	printf("Enter the elements of 1st matrix\n");
	fflush(stdout) ; fflush(stdin);
	for(i = 0 ; i < 2 ; i++)
	{
		for(j = 0 ; j < 2 ; j++)
		{
			printf("Enter a%d%d: ",i+1 ,j+1);
			fflush(stdout) ; fflush(stdin);
			scanf("%f",&matrix1[i][j]);
		}
	}

	printf("Enter the elements of 2nd matrix\n");
	fflush(stdout) ; fflush(stdin);
	for(i = 0 ; i < 2 ; i++)
	{
		for(j = 0 ; j < 2 ; j++)
		{
			printf("Enter b%d%d: ",i+1 ,j+1);
			fflush(stdout) ; fflush(stdin);
			scanf("%f",&matrix2[i][j]);
		}
	}

	printf("\nSum of Matrix: \n");
	for(i = 0 ; i < 2 ; i++)
	{
		for(j = 0 ; j < 2 ; j++)
		{
			printf("%.1f    ",matrix1[i][j] + matrix2[i][j]);
		}
		printf("\n");
	}

	return 0 ;
}










/*fflush(stdout) ; fflush(stdin);*/
