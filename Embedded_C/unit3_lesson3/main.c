/*
 *	main.c
 *
 *  Created on: Oct 3, 2021
 *      Author: Ahmed Azazy
 */


#include <stdint.h>

#define RCC_BASE	(0x40021000)
#define APB2ENR		*((volatile uint32_t *)((uint32_t *)(RCC_BASE + 0x18)))


#define GPIOA_BASE	(0x40010800)
#define GPIOA_CRH	*((volatile uint32_t *)((uint32_t *)(GPIOA_BASE + 0x04)))
//#define GPIOA_ODR	*((volatile uint32_t *)((uint32_t *)(GPIOA_BASE + 0x0C)))



typedef union
{
	volatile uint32_t all_fields;
	
	struct pins
	{
		volatile uint32_t reserved : 13 ;
		volatile uint32_t p13 : 1;
	}pin;
}ODR_t;

#define _GPIOA_ODR (GPIOA_BASE + 0x0C)
#define	S_ODRA	((volatile ODR_t *)(_GPIOA_ODR))

int main(void )
{
	uint32_t i = 0;
	APB2ENR |=(1<<2);
	
	GPIOA_CRH &=~(0x3 <<20);
	GPIOA_CRH |= (1<<20);
	
	while(1)
	{
		//GPIOA_ODR ^= (1<<13);
		S_ODRA->pin.p13 = 0;
		for(i = 0 ; i < 20000 ; i++){}
		S_ODRA->pin.p13 = 1;
		for(i = 0 ; i < 20000 ; i++){}
	}
	
	return 0;
	
}