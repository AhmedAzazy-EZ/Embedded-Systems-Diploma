/*
 *	Mideterm1 >> Code4
 *
 *  Created on: Oct 24, 2021
 *      Author: Ahmed Azazy
 */

/*
4)c function to revers digits in number? test case 1:
input:2457 ->output:7542 . test case 2: input:1057 ->output:7501. *
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

void ReversDigits(int num)
{
	while(num!=0)
	{
		printf("%d" , num%10);
		num/=10;
	}
}

int main()
{
	int num;
	printf("Enter a numbers: ");
	fflush(stdout) ; fflush(stdin);
	scanf("%d" , &num);
	ReversDigits(num);
	return 0 ;
}










/*fflush(stdout) ; fflush(stdin);*/
