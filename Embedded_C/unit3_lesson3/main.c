#include <stdint.h>

#define RCC_BASE	(0x40021000)
#define APB2ENR		*((volatile uint32_t *)((uint32_t *)(RCC_BASE + 0x18)))


#define GPIOA_BASE	(0x40010800)
#define GPIOA_CRH	*((volatile uint32_t *)((uint32_t *)(GPIOA_BASE + 0x04)))
#define GPIOA_ODR	*((volatile uint32_t *)((uint32_t *)(GPIOA_BASE + 0x0C)))


int main(void )
{
	uint32_t i = 0;
	APB2ENR |=(1<<2);
	
	GPIOA_CRH &=~(0x3 <<20);
	GPIOA_CRH |= (1<<20);
	
	while(1)
	{
		GPIOA_ODR ^= (1<<13);
		*((volatile uint32_t *)(0x20000000)) ^=1;
		for(i = 0 ; i < 20000 ; i++){}
	}
	
	return 0;
	
}