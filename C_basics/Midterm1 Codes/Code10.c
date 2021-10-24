/*
 *	Mideterm1 >> Code10
 *
 *  Created on: Oct 24, 2021
 *      Author: Ahmed Azazy
 */

/*
10)c function to count the max number of ones between two zeros? test case 1:
 input:14(01110) output:3. test case 2: input:110(0110 1110). output:3
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

int maxNumberOfOnes(int num)
{

	int maxNum = 0 , i , cmp=0;
	for(i = 0 ; i<=31 ; i++)
	{

	  if(!(num&(1<<i)))
		{
			if(cmp > maxNum)
				maxNum = cmp;
			cmp = 0;
			continue;
		}
	  cmp++;
	  if(i==31)
	  {
			if(cmp > maxNum)
				maxNum = cmp;
	  }
	}
	return maxNum;

}

int main()
{
	int num;
	printf("Enter a number: ");
	fflush(stdout) ; fflush(stdin);
	scanf("%d" , &num);
	printf("max number of ones is: %d" , maxNumberOfOnes(num));

	return 0 ;
}










/*fflush(stdout) ; fflush(stdin);*/
