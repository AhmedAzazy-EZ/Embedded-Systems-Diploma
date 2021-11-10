/*
 * CA.h
 *
 *  Created on: Nov 10, 2021
 *      Author: Ahmed Azazy
 */

#ifndef CA_H_
#define CA_H_

#include <stdio.h>


/*-------------------externs---------------*/
extern void (*CA_state)();

/*-------------------typedefs---------------*/

typedef enum
{
	CA_WAITING ,
	CA_DRIVING
}CA_state_t;



/*------------------CA APIs----------------*/
void CA_waiting();
void CA_driving();


#endif /* CA_H_ */
