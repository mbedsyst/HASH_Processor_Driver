#include "LED.h"
#include "UART.h"

int main(void)
{
	LED_Init();

	RCC->APB1ENR1 	|=	(0x01<<17);
	GPIOD->MODER	&= ~((0x03<<10) | (0x03<<12));
	GPIOD->MODER	|= 	((0x02<<10) | (0x02<<12));
	GPIOD->AFR[0]	|=	((0x07<<20) | (0x07<<24));

	LED1_ON();
	USART2->CR1	&=	~((1U<<28) | (1U<<12));
	USART2->BRR =	(0x0341);
	USART2->CR2	&=	~(0x03<<12);
	USART2->CR1 |=	(0x01<<0);
	USART2->CR1	|=	(0x01<<3);
	LED3_ON();

	while(1)
	{
		USART2->TDR	=	'M';
		while(!(USART2->ISR & (1U<<6)));
	}
}
