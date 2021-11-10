/*
 * US.c
 *
 *  Created on: Nov 10, 2021
 *      Author: Ahmed Azazy
 */

#include <stdio.h>
#include <stdlib.h>
#include "US.h"

US_state_t US_state_id;
void (*US_state)() = US_init;
int distance;



void US_init()
{
	printf("US_Init\n");
	US_state = US_busy;
}

int generate_random(int l , int h)
{
	return ((l + rand())%(h-l+1));
}

void US_read_distance()
{
	distance = generate_random(45 , 55);
}

void US_busy()
{
	US_state_id = US_BUSY;
	US_read_distance();
	printf("US busy state : distance=%d\n" , distance);
	US_state = US_busy;
}


