/*
 * DC.c
 *
 *  Created on: Nov 10, 2021
 *      Author: Ahmed Azazy
 */


#include <stdio.h>
#include "DC.h"

DC_state_t DC_state_id;
void (* DC_state) () = DC_init;
int speed = 0;

void DC_init()
{
	printf("DC_Init\n");
	DC_state = DC_idle;
}

void DC_idle()
{
	DC_state_id  = DC_IDLE;
	printf("DC idle state speed=%d\n",speed);
	DC_state = DC_busy;
}

void DC_busy()
{
	DC_state_id  = DC_BUSY;
	printf("DC busy state speed=%d\n",speed);
	DC_state = DC_idle;
}
