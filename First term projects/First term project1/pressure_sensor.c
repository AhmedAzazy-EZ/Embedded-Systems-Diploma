/*
 * pressure_sensor.c
 *
 *  Created on: Nov 12, 2021
 *      Author: Ahmed Azazy
 */


#include <stdint.h>
#include "driver.h"
#include "pressure_sensor.h"

int Pressure_val = 0;
void (*Pressure_state)() = Pressure_init;



void Pressure_init()
{
	//pressure sensor GPIO Init

	//set pressure sensor state to reading
	Pressure_state = Pressure_reading;
}


void Pressure_reading()
{
	//read pressure value
	Pressure_val = getPressureVal();

	//set pressure sensor state to waiting
	Pressure_state = Pressure_waiting;
}

void Pressure_waiting()
{
	Delay(1000);
	//set pressure sensor state to reading
	Pressure_state = Pressure_reading;
}
