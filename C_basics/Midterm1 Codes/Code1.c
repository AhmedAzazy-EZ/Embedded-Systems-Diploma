/*
 *	Mideterm1 >> Code1
 *
 *  Created on: Oct 24, 2021
 *      Author: Ahmed Azazy
 */

/*
 * 1)c function to take a number and sum all digits? test case 1: input:123 ->output:6
 *  test case 2: input:4565 ->output:20 *
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>

int Calculate_Sum(int num)
{
	int sum = 0 , rem;
	while(num!=0)
	{
		rem= num%10;
		sum+=rem;
		num/=10;
	}

	return sum;
}

int main()
{
	int num;
	printf("Enter a number: ");
	fflush(stdout) ; fflush(stdin);
	scanf("%d" , &num);
	printf("Sum of num %d = %d" , num , Calculate_Sum(num));
	return 0 ;
}










/*fflush(stdout) ; fflush(stdin);*/
