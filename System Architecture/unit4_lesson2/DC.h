/*
 * DC.h
 *
 *  Created on: Nov 10, 2021
 *      Author: Ahmed Azazy
 */

#ifndef DC_H_
#define DC_H_

/*----------------typedefs------------*/
typedef enum
{
	DC_IDLE ,
	DC_BUSY
}DC_state_t;


/*----------------externs-------------*/
extern int speed;
extern void (* DC_state) ();


/*--------------DC APIs----------------*/
void DC_init();
void DC_idle();
void DC_busy();
#endif /* DC_H_ */
