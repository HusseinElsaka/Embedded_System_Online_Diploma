#include "uart.h"

unsigned char TxString[100] = "learn-in-depth: <Hussein>";

void main()
{
	uart_send_string(TxString);
}