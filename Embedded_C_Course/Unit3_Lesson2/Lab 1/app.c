#include<uart.h>

unsigned char string_buffer[100] = "Learn-in-depth: Mahmoud";
unsigned char const string_buffer2[50] = "read only data section";
unsigned int BSS[100];
int main()
{
	
	Uart_Send_String(&string_buffer[0]);
	return 0;
}