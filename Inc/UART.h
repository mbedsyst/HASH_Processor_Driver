#ifndef __UART_H__
#define __UART_H__

#include "stm32l4r5xx.h"

void UART_Init(void);
void UART_Tx(char data);
void UART_Tx_String(char *str);

#endif
