/*
 * main.c
 *
 *  Created on: Nov 7, 2021
 *      Author: Ahmed Azazy
 */


#include <stdio.h>
#include "lifo.h"

LIFO_t lifo_uart;
element_t uart_buff[5];
int main(void)
{
	int i = 0;
	element_t temp;
	LIFO_Init(&lifo_uart, uart_buff, 5);

	printf("Writing to the LIFO\n");
	for(i  = 0 ; i < 7 ; i++)
	{
		if(LIFO_AddItem(&lifo_uart, i+1) == LIFO_NO_ERROR )
		{
			printf("Writing %d in lifo\n" , i+1);
		}

		else
		{
			printf("Writing %d is failed\n" , i+1);
		}
	}


	printf("------------------------------------\n\nReading from the LIFO\n");
	for(i  = 0 ; i < 7 ; i++)
	{
		if(LIFO_ReadItem(&lifo_uart , &temp) == LIFO_NO_ERROR )
		{
			printf("Reading from LIFO %d\n" , temp);
		}

		else
		{
			printf("Reading from LIFO is failed\n");
		}
	}

	return 0;
}



