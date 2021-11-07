/*
 * lifo.h
 *
 *  Created on: Nov 7, 2021
 *      Author: Ahmed Azazy
 */


#ifndef LIFO_H_
#define LIFO_H_
#include <stdint.h>
#include <stdlib.h>

/*------------User Configurations-----*/

#define element_t	uint8_t

/*---------------typedefs-------------*/

typedef struct
{
	element_t * base;
	element_t * head;
	unsigned int length;
	unsigned int count;
}LIFO_t;

typedef enum
{
	LIFO_NO_ERROR ,
	LIFO_FULL ,
	LIFO_EMPTY ,
	LIFO_NULL
}LIFO_status;


/*---------------LIFO APIs-----------------*/

void LIFO_Init(LIFO_t * P_lifo , element_t * base , unsigned int length);
LIFO_status LIFO_AddItem(LIFO_t * P_lifo , element_t item);
LIFO_status LIFO_ReadItem(LIFO_t * P_lifo , element_t * item );
int LIFO_IsFull (LIFO_t * P_lifo) ;
int LIFO_IsEmpty (LIFO_t * P_lifo) ;
#endif /* LIFO_H_ */
