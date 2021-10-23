/*
 * Homework4 >> EX4
 *
 *  Created on: Oct 23, 2021
 *      Author: Ahmed Azazy
 */


#include <stdio.h>
#include <stdint.h>
#include <string.h>

int Pow_Recusion(int base , int power)
{
	if(power <= 1)
		return base;

	return base*Pow_Recusion(base , --power);
}

int main()
{
	int base , power;
	printf("Enter base number: ");
	fflush(stdout) ; fflush(stdin);
	scanf("%d" , &base);
	printf("Enter power number(positive integer): ");
	fflush(stdout) ; fflush(stdin);
	scanf("%d" , &power);
	if(power > 0)
	printf("%d ^ %d = %d",base , power , Pow_Recusion(base , power));
	return 0 ;
}










/*fflush(stdout) ; fflush(stdin);*/
