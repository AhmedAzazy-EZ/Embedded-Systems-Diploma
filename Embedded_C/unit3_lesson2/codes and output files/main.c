/*
 *	main.c
 *
 *  Created on: Oct 31, 2021
 *      Author: Ahmed Azazy
 */

#include "uart.h"

char str[100] = "Learn-in-depth: Ahmed Azazy";
char const str2[100] = "I'm a constant data >> RO section";
void main(void )
{
	Uart_Send_Str(str);
	while(1);
}