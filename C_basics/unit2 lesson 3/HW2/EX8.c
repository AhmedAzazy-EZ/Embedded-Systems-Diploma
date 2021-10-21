/*
 * Homework2 >> EX8
 *
 *  Created on: Oct 21, 2021
 *      Author: Ahmed Azazy
 */


#include <stdio.h>
#include <math.h>
int main(void )
{
	float in1 , in2;
	char operation;
	printf("Enter operation either + or - or * or divide : ");
	fflush(stdout) ; fflush(stdin);
	scanf("%c" , &operation);
	printf("Enter two operands: ");
	fflush(stdout) ; fflush(stdin);
	scanf("%f %f" , &in1 , &in2);

	switch(operation)
	{
	case '+' :
		printf("%.1f + %.1f = %.1f" , in1 , in2 , in1+in2);
		break;
	case '-' :
		printf("%.1f - %.1f = %.1f" , in1 , in2 , in1-in2);
		break;

	case '*' :
		printf("%.1f * %.1f = %.1f" , in1 , in2 , in1*in2);
		break;

	case '/' :
		printf("%.1f / %.1f = %.1f" , in1 , in2 , in1/in2);
		break;

	default :
		printf("Invalid operation\n");
	}
	return 0;
}









/*fflush(stdout) ; fflush(stdin);*/
