/*
 * FIFO.c
 *
 *  Created on: Nov 7, 2021
 *      Author: Ahmed Azazy
 */

#include "fifo.h"

void FIFO_Init(FIFO_t * P_fifo , element_t * base , unsigned int length)
{
	if(P_fifo == NULL)
		return ;


	P_fifo->base = base;
	P_fifo->length = length;
	P_fifo->head = base ;
	P_fifo->tail = base ;
	P_fifo->count = 0 ;
}

FIFO_status FIFO_AddItem(FIFO_t * P_fifo , element_t item)
{
	/*check if FIFO is NULL*/
	if(P_fifo == NULL)
		return FIFO_NULL;

	/*check if fifo is FULL*/
	if(P_fifo->count == P_fifo->length)
		return FIFO_FULL;


	*P_fifo->head++ = item;
	P_fifo->count++;
	//reset the head pointer
	if(P_fifo->head >= (P_fifo->base + P_fifo->length))
		P_fifo->head = P_fifo->base;

	return FIFO_NO_ERROR;
}

FIFO_status FIFO_ReadItem(FIFO_t * P_fifo , element_t * item)
{

	/*check if FIFO is NULL*/
	if(P_fifo == NULL)
		return FIFO_NULL;

	/*check if fifo is Empty*/
	if(P_fifo->count == 0)
		return FIFO_EMPTY;

	*item = *P_fifo->tail++;
	P_fifo->count--;
	//reset the head pointer
	if(P_fifo->tail >= (P_fifo->base + P_fifo->length))
		P_fifo->tail = P_fifo->base;

	return FIFO_NO_ERROR;
}

void FIFO_print(FIFO_t * P_fifo)
{
	if(P_fifo == NULL)
	{
		printf("Not a vaild FIFO\n");
		return ;
	}

	if(P_fifo->count > 0)
	{
		int i = 0;
		element_t * temp = P_fifo->tail;
		for(; i < P_fifo->count ; i++ )
		{
			printf("%u\n" , *temp++ );
		}
	}

	else printf("FIFO is Empty\n");
}
