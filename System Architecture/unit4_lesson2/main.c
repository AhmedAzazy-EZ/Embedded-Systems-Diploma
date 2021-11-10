/*
 * main.c
 *
 *  Created on: Nov 10, 2021
 *      Author: Ahmed Azazy
 */

#include <stdio.h>
#include "US.h"
#include "CA.h"
#include "DC.h"
int main(void)
{
	int i;
	while(1)
	{
		US_state();
		DC_state();
		CA_state();
		for(i = 0 ; i < 8000000 ; i++);
	}
	return 0;
}

