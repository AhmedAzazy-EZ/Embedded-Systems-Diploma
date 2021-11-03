#include <stdint.h>

extern uint32_t _stack_top;
extern uint32_t _E_text ;
extern uint32_t _E_data ;
extern uint32_t _S_data ;
extern uint32_t _E_bss ;
extern uint32_t _S_bss ;

extern int main(void ) ;
void Reset_Handler(void );
void Default_Handler(void );

void NMI(void ) __attribute__((weak , alias("Default_Handler")));
void HardFault(void ) __attribute__((weak , alias("Default_Handler")));
void MemManage(void ) __attribute__((weak , alias("Default_Handler")));
void BusFault(void ) __attribute__((weak , alias("Default_Handler")));
void UsageFault(void ) __attribute__((weak , alias("Default_Handler")));

uint32_t vectors_arr[] __attribute__((section(".vectors"))) = 
{
(uint32_t) &_stack_top , 
(uint32_t) &Reset_Handler , 
(uint32_t) &NMI , 
(uint32_t) &HardFault , 
(uint32_t) &MemManage ,
(uint32_t) &BusFault ,
(uint32_t) &UsageFault	
}; 

void Reset_Handler(void )
{	

	unsigned char * psc = (unsigned char *)&_E_text;
	unsigned char * pdes = (unsigned char *)&_S_data;
	uint32_t size = (unsigned char *)&_E_data - (unsigned char *)&_S_data ;

	for(int i = 0 ; i < size ; i++)
	{
		*(pdes++) = *(psc++);
	}
	
	size = (unsigned char *)&_E_bss - (unsigned char *)&_S_bss ;
	pdes = (unsigned char *)&_S_bss;
	for(int i = 0 ; i< size ; i++)
	{
		*pdes++ = (unsigned char)0;
	}
	main();
	
}

void Default_Handler(void)
{
	Reset_Handler();
}