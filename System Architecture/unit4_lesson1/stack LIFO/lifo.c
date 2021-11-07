/*
 * lifo.c
 *
 *  Created on: Nov 7, 2021
 *      Author: Ahmed Azazy
 */

#include "lifo.h"

void LIFO_Init(LIFO_t * P_lifo , element_t * base , unsigned int length)
{
	P_lifo->base = base;
	P_lifo->head = base;
	P_lifo->count = 0;
	P_lifo->length = length;
}


LIFO_status LIFO_AddItem(LIFO_t * P_lifo , element_t item  )
{
	/*check if lifo is Null*/
	if(P_lifo == NULL)
		return LIFO_NULL ;

	/*check if the head is out of Scope*/
	if(P_lifo->head >= (P_lifo->base + P_lifo->length))
		return LIFO_FULL ;

	*P_lifo->head++ = item;
	P_lifo->count++;
	return LIFO_NO_ERROR;
}

LIFO_status LIFO_ReadItem(LIFO_t * P_lifo , element_t * item )
{

	/*check if lifo is Null*/
	if(P_lifo == NULL)
		return LIFO_NULL ;

	/*check if the lifo is empty*/
	if(P_lifo->head == P_lifo->base)
		return LIFO_EMPTY ;


	*item = *--P_lifo->head;
	P_lifo->count--;
	return LIFO_NO_ERROR;
}



int LIFO_IsFull (LIFO_t * P_lifo)
{

	if(P_lifo->head >= (P_lifo->base + P_lifo->length))
		return 1;

	else return 0;
}

int LIFO_IsEmpty (LIFO_t * P_lifo)
{
	if(P_lifo->head == P_lifo->base)
		return 1 ;

	else return 0;
}
