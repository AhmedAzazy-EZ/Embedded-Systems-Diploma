/*
 * Homework3 Arrays >> EX3
 *
 *  Created on: Oct 22, 2021
 *      Author: Ahmed Azazy
 */


#include <stdio.h>
int main()
{
	int rows , columns , i , j;
	printf("Enter rows and columns of matrix: ");
	fflush(stdout) ; fflush(stdin);
	scanf("%d %d",&rows , &columns);
	int matrix[rows][columns];
	printf("Enter elements of matrix: \n");
	fflush(stdout) ; fflush(stdin);
	for(i = 0 ; i < rows ; i++)
	{
		for( j = 0 ; j < columns ; j++)
		{
			printf("Enter elements a%d%d: ",i+1 , j+1);
			fflush(stdout) ; fflush(stdin);
			scanf("%d" , &matrix[j][i]);
		}
	}

	printf("Entered matrix: \n");
	for(i = 0 ; i < rows ; i++)
	{
		for( j = 0 ; j < columns ; j++)
		{
			printf("%d    ",matrix[j][i]);
		}
		printf("\n");
	}

	printf("Transpose of Matrix: \n");
	for(i = 0 ; i < columns ; i++)
	{
		for(j = 0 ; j < rows ; j++)
		{
			printf("%d    ",matrix[i][j]);
		}
		printf("\n");
	}
	return 0 ;
}










/*fflush(stdout) ; fflush(stdin);*/
