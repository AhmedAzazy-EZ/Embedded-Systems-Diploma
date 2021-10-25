/*
 *	HomeWork5 >> EX3
 *
 *  Created on: Oct 25, 2021
 *      Author: Ahmed Azazy
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

struct Scomplex
{
	float Real;
	float Img;

}num1 , num2;

struct Scomplex ReadComplex(void )
{
	struct Scomplex num;
	printf("Enter real imaginary respectively: ");
	fflush(stdout) ; fflush(stdin);
	scanf("%f %f" , &num.Real , &num.Img);
	return num;
}

void printfComplexSum(struct Scomplex num1 , struct Scomplex num2)
{
	printf("Sum= %.1f + %.1fi" ,num1.Real + num2.Real , num1.Img + num2.Img);
}

int main()
{
	printf("For first complex number \n");
	num1 = ReadComplex();
	printf("For second complex number \n");
	num2 = ReadComplex();
	printfComplexSum(num1 , num2);
	return 0 ;
}










/*fflush(stdout) ; fflush(stdin);*/
