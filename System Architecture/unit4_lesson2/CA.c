/*
 * CA.c
 *
 *  Created on: Nov 10, 2021
 *      Author: Ahmed Azazy
 */

#include <stdlib.h>
#include "CA.h"
#include "US.h"
#include "DC.h"

const int threshold = 50;
CA_state_t CA_state_id;

void (*CA_state) () = CA_waiting;

void CA_waiting()
{
	CA_state_id = CA_WAITING;
	speed = 0;
	printf("CA_waiting state: distance=%d  ,  speed=%d\n",distance,speed);
	distance <= threshold ? (CA_state = CA_waiting) : (CA_state = CA_driving);
}


void CA_driving()
{
	CA_state_id = CA_DRIVING;
	speed = 30;
	printf("CA_driving state: distance=%d  ,  speed=%d\n",distance,speed);
	distance <= threshold ? (CA_state = CA_waiting) : (CA_state = CA_driving);
}



