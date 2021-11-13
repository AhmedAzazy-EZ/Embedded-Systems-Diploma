/*
 * detection_algorithm.c
 *
 *  Created on: Nov 12, 2021
 *      Author: Ahmed Azazy
 */


#include "detection_algorithm.h"
#include "pressure_sensor.h"
#include "driver.h"

const int threshold = 20;
void (*Detect_state) () = Detect_pressure;

/*
 * this enum is used by the alarm_monitor module
 * to get the state of the detection
 */
Alarm_state_t Detection_state = DETECT_OFF;


void Detect_pressure()
{
	//check if pressure exceeds the threshold
	if(Pressure_val >= threshold)
	{
		Detection_state = DETECT_ON;
	}

	else
	{
		Detection_state = DETECT_OFF;
	}

	//set the state of detection algorithm
	Detect_state = Detect_pressure;
}
