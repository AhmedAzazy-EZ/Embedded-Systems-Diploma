/*
 * alarm_monitor.h
 *
 *  Created on: Nov 12, 2021
 *      Author: Ahmed Azazy
 */

#ifndef ALARM_MONITOR_H_
#define ALARM_MONITOR_H_

//---------------externs------------------

extern void (*Alarm_state)();

//---------------alarm_monitor APIs--------

void alarm_init();
void alarm_monitor();
void alarm_waiting();

#endif /* ALARM_MONITOR_H_ */
