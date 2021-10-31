/*
 *	uart.h
 *
 *  Created on: Oct 31, 2021
 *      Author: Ahmed Azazy
 */


#ifndef UART_H_
#define UART_H_

#define UART0_BASE  (0x101f1000)
#define UART0_DR	*((volatile unsigned int *)(UART0_BASE))

void Uart_Send_Str(char const * str);

#endif