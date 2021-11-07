/*
 * main.c
 *
 *  Created on: Nov 7, 2021
 *      Author: Ahmed Azazy
 */

#include "fifo.h"
FIFO_t fifo_uart;
element_t uart_buff[5];


int main(void)
{
	int i = 0;
	element_t temp;
	FIFO_Init(&fifo_uart, uart_buff, 5);

	printf("Writing to the FIFO\n");
	for(i  = 0 ; i < 7 ; i++)
	{
		if(FIFO_AddItem(&fifo_uart, i+1) == FIFO_NO_ERROR )
		{
			printf("Writing %d in FIFO\n" , i+1);
		}

		else
		{
			printf("Writing %d is failed\n" , i+1);
		}
	}

	printf("------------------------------\n");
	FIFO_ReadItem(&fifo_uart, &temp);
	printf("Reading from FIFO %d\n" , temp);
	FIFO_ReadItem(&fifo_uart, &temp);
	printf("Reading from FIFO %d\n" , temp);

	FIFO_print(&fifo_uart);

	printf("------------------------------------\n\nReading from the FIFO\n");
	for(i  = 0 ; i < 7 ; i++)
	{
		if(FIFO_ReadItem(&fifo_uart , &temp) == FIFO_NO_ERROR )
		{
			printf("Reading from FIFO %d\n" , temp);
		}

		else
		{
			printf("Reading from FIFO is failed\n");
		}
	}

}


