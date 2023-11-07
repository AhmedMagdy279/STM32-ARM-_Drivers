/************************************************************/
/* Author  : Ahmed Magdy									*/
/* Date    : 5/11/2023										*/
/* Version : V01											*/
/************************************************************/

#ifndef _GPIO_interface_H_
#define _GPIO_interface_H_


#define GPIOA			0
#define GPIOB			1
#define GPIOC			2

#define PIN0			0
#define PIN1			1
#define PIN2			2
#define PIN3			3
#define PIN4			4
#define PIN5			5
#define PIN6			6
#define PIN7			7
#define PIN8			8
#define PIN9			9
#define PIN10			10
#define PIN11			11
#define PIN12			12
#define PIN13			13
#define PIN14			14
#define PIN15			15


#define OP_10MHZ_GP_PP		0b0001
#define OP_10MHZ_GP_OD		0b0101
#define OP_10MHZ_AF_PP		0b1001
#define OP_10MHZ_AF_OD		0b1101

#define OP_2MHZ_GP_PP		0b0010
#define OP_2MHZ_GP_OD		0b0110
#define OP_2MHZ_AF_PP		0b1010
#define OP_2MHZ_AF_OD		0b1110

#define OP_50MHZ_GP_PP		0b0011
#define OP_50MHZ_GP_OD		0b0111
#define OP_50MHZ_AF_PP		0b1011
#define OP_50MHZ_AF_OD		0b1111

#define IP_ANALOG			0b0000
#define IP_FLOATING			0b0100
#define IP_PUSH_PULL		0b1000

#define GPIO_LOW			0
#define GPIO_HIGH			1



void GPIO_voidSetPinDirection (u8 copy_u8PORT , u8 copy_u8PIN , u8 copy_u8MODE);
void GPIO_voidSetPinValue (u8 copy_u8PORT , u8 copy_u8PIN , u8 copy_u8VALUE);
u8 GPIO_voidGetPinValue (u8 copy_u8PORT , u8 copy_u8PIN);
void GPIO_voidUnLockPin (u8 copy_u8PORT , u8 copy_u8PIN);
void GPIO_voidLockPin (u8 copy_u8PORT , u8 copy_u8PIN);










#endif
