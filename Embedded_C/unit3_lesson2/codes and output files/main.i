# 1 "./main.c"
# 1 "<command-line>"
# 1 "./main.c"







# 1 "./uart.h" 1
# 15 "./uart.h"
void Uart_Send_Str(char const * str);
# 9 "./main.c" 2

char str[100] = "Learn-in-depth:<Ahmed Azazy>";
char const str2[100] = "I'm a constant data >> RO section";
void main(void )
{
 Uart_Send_Str(str);
 while(1);
}
