/*
 *	uart.c
 *
 *  Created on: Oct 31, 2021
 *      Author: Ahmed Azazy
 */
 
 
 #include "uart.h"
 
void Uart_Send_Str(char const * str)
{
	
	while(*str!= '\0')
	{
		UART0_DR = *str++;
	}
}