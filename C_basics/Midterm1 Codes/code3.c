/*
 *	Mideterm1 >> Code3
 *
 *  Created on: Oct 24, 2021
 *      Author: Ahmed Azazy
 */

/*
3)c function to print all prime numbers between two numbers? test case :
input:n1=1,n2=20 ->output:1 2 3 5 7 11 13 17 19 *
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

void Print_Prime(int a , int b)
{
	int i;
	/*set least significant bit of a to make it odd*/
	if(a <= 5)
	{
		printf("1 2 3 5 ");
		a = 6;
	}

	a|=(1);
	for(i = a ; i <= b ; i+=2)
		if((i%3!=0) && (i%5 != 0))
			printf("%d " , i);

}

int main()
{
	int num1 , num2;
	printf("Enter two numbers: ");
	fflush(stdout) ; fflush(stdin);
	scanf("%d %d" , &num1 , &num2);
	printf("Prime Numbers between %d and %d are: \n" , num1 , num2);
	Print_Prime(num1 , num2);
	return 0 ;
}










/*fflush(stdout) ; fflush(stdin);*/
