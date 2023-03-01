#include "uart.h"


void uart_send_string(unsigned char *pTxString)
{
	/* Loop Untill string Finish */
	while(*pTxString != '\0')
	{
		UART0DR = (unsigned char)(*pTxString);
		pTxString++;
	}
}