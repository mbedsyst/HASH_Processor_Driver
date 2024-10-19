#include "UART.h"

/* USART2_TX - PD5
 * USART2_RX - PD6*/

void UART_Init(void)
{
	/*RCC->APB1ENR 	|=	(0x01<<17);
	GPIOD->MODER	&= ~((0x03<<10) | (0x03<<12));
	GPIOD->MODER	|= 	((0x02<<10) | (0x02<<12));
	GPIOD->AFR[0]	|=	((0x07<<20) | (0x07<<24));

	USART2->CR1	&=	~((1U<<28) | (1U<<12));

	USART2->CR2	&=	~(0x03<<12);
	USART2->CR1 |=	(0x01<<0);
	USART2->CR1	|=	(0x01<<3);
	USART2->TDR	=	'M';*/
}

void UART_Tx(char data)
{

}

void UART_Tx_String(char *str)
{

}
