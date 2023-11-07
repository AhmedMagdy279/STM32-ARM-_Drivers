/*************************************************************************/
/*	Author : Ahmed Magdy												*/
/*	Date   : 5/11/2023												   */
/*	Version: V01													  */
/*********************************************************************/

#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H

#define RCC_AHB 		0
#define RCC_APB1		1
#define RCC_APB2		2

#define RCC_APB2_AFIO	0
#define RCC_APB2_EXTI	1
#define RCC_APB2_GPIOA	2
#define RCC_APB2_GPIOB	3
#define RCC_APB2_GPIOC	4
#define RCC_APB2_GPIOD	5
#define RCC_APB2_GPIOE	6
#define RCC_APB2_GPIOF	7
#define RCC_APB2_ADC1	8
#define RCC_APB2_ADC2	9
#define RCC_APB2_TIM1	10
#define RCC_APB2_SPI1	11
#define RCC_APB2_TIM8	12
#define RCC_APB2_USART1	13

void RCC_voidInitSysClock(void);
void RCC_voidEnableClock ( u8 Copy_u8BusId, u8 Copy_u8PerphId );
void RCC_voidDisableClock ( u8 Copy_u8BusId, u8 Copy_u8PerphId );

#endif
