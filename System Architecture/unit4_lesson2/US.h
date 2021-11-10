/*
 * US.h
 *
 *  Created on: Nov 10, 2021
 *      Author: Ahmed Azazy
 */

#ifndef US_H_
#define US_H_

/*---------------externs-------------*/
extern void (*US_state)();
extern int distance;


/*-------------typedefs--------------*/

typedef enum
{
	US_BUSY
}US_state_t;

/*--------------US APIs--------------*/
void US_init();
void US_busy();
void US_read_distance();

#endif /* US_H_ */
