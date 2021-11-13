/*
 * detection_algorithm.h
 *
 *  Created on: Nov 12, 2021
 *      Author: Ahmed Azazy
 */

#ifndef DETECTION_ALGORITHM_H_
#define DETECTION_ALGORITHM_H_

//---------------typedef------------

typedef enum
{
	DETECT_OFF ,
	DETECT_ON
}Alarm_state_t;

//---------------externs-----------

extern Alarm_state_t Detection_state;
extern void (*Detect_state) ();


//---------detection Algo APIs------
void Detect_pressure();


#endif /* DETECTION_ALGORITHM_H_ */
