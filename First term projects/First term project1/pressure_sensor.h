/*
 * pressure_sensor.h
 *
 *  Created on: Nov 12, 2021
 *      Author: Ahmed Azazy
 */

#ifndef PRESSURE_SENSOR_H_
#define PRESSURE_SENSOR_H_

//----------------externs----------------

extern int Pressure_val;
extern void (*Pressure_state)();

//---------------typedefs---------------



//------------pressure_sensor APIs------
void Pressure_init();
void Pressure_reading();
void Pressure_waiting();

#endif /* PRESSURE_SENSOR_H_ */
