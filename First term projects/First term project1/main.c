/*
 * main.c
 *
 *  Created on: Nov 12, 2021
 *      Author: Ahmed Azazy
 */

#include <stdint.h>
#include "driver.h"
#include "pressure_sensor.h"
#include "detection_algorithm.h"
#include "alarm_monitor.h"

int main(void )
{

	GPIO_INITIALIZATION ();

	while(1)
	{
		Pressure_state();
		Detect_state();
		Alarm_state();
	}


}



