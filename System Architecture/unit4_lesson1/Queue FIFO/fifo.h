/*
 * fifo.h
 *
 *  Created on: Nov 7, 2021
 *      Author: Ahmed Azazy
 */

#ifndef FIFO_H_
#define FIFO_H_

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>


/*---------------User Configuration--------------*/

#define element_t uint8_t

/*----------------typedefs------------------------*/

typedef struct
{
	element_t * base ;
	element_t * head ;
	element_t * tail ;
	unsigned int length ;
	unsigned int count ;
}FIFO_t;

typedef enum
{
	FIFO_NO_ERROR ,
	FIFO_EMPTY ,
	FIFO_FULL ,
	FIFO_NULL
}FIFO_status;

/*------------------FIFO APIs------------------*/

void FIFO_Init(FIFO_t * P_fifo , element_t * base , unsigned int length);
FIFO_status FIFO_AddItem(FIFO_t * P_fifo , element_t item);
FIFO_status FIFO_ReadItem(FIFO_t * P_fifo , element_t * item);
void FIFO_print(FIFO_t * P_fifo);


#endif /* FIFO_H_ */
