/*
 * Homework4 >> EX1
 *
 *  Created on: Oct 23, 2021
 *      Author: Ahmed Azazy
 */


#include <stdio.h>
#include <stdint.h>

void primeNumbers(int a , int b )
{
	printf("Prime numbers between %d and %d are: " , a , b);
	/*
	 * set a as odd number
	 * by setting the Least significant bit
	 */
	a|=(1);
	for( ; a<=b ; a+=2)
	{
		if(a%3 != 0 && a%5 != 0)
			printf("%d ", a);
	}
}
int main()
{
	int a ,b;
	printf("Enter two numbers (intervals): ");
	fflush(stdout) ; fflush(stdin);
	scanf("%d %d" , &a , &b);
	primeNumbers(a , b);
	return 0 ;
}










/*fflush(stdout) ; fflush(stdin);*/
