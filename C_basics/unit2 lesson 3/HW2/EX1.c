/*
 * Homework2 >> EX1
 *
 *  Created on: Oct 21, 2021
 *      Author: Ahmed Azazy
 */


#include <stdio.h>
#include <math.h>
int main(void )
{
	int a ;
	printf("Enter an integer you want to check : ");
	fflush(stdin);fflush(stdout);
	scanf("%d" , &a);

	if(a & 1)
	{
		printf("%d is odd\n", a);
	}
	else
	{
		printf("%d is even\n", a);
	}
	return 0;
}









/*fflush(stdout) ; fflush(stdin);*/
