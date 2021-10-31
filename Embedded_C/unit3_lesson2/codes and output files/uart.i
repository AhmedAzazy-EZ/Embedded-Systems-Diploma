# 1 "./uart.c"
# 1 "<command-line>"
# 1 "./uart.c"
# 9 "./uart.c"
# 1 "./uart.h" 1
# 15 "./uart.h"
void Uart_Send_Str(char const * str);
# 10 "./uart.c" 2

void Uart_Send_Str(char const * str)
{

 while(*str!= '\0')
 {
  *((volatile unsigned int *)((0x101f1000))) = *str++;
 }
}
