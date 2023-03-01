#ifndef _UART_H
#define _UART_H

#define UART0DR *((volatile unsigned int * const)((unsigned int *)0x101f1000))

/* Function to send String Using UART */
void uart_send_string(unsigned char *pTxString);

#endif