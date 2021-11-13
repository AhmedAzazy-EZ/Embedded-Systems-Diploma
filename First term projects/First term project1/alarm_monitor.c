/*
 * alarm_monitor.c
 *
 *  Created on: Nov 12, 2021
 *      Author: Ahmed Azazy
 */


#include "driver.h"
#include "detection_algorithm.h"
#include "alarm_monitor.h"


void (*Alarm_state)() = alarm_init;

void alarm_init()
{
	//turn the alarm off
	Set_Alarm_actuator(1);
	Alarm_state = alarm_monitor;
}

void alarm_monitor()
{
	//check if high pressure is detected
	if(Detection_state == DETECT_ON)
	{
		//turn the alarm on
		Set_Alarm_actuator(0);
		Alarm_state = alarm_waiting;
	}
}

void alarm_waiting()
{
	//60 seconds delay
	Delay(1000000);
	Detection_state = DETECT_OFF;
	//turn the alarm off
	Set_Alarm_actuator(1);
	Alarm_state = alarm_monitor;
}
