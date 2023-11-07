/************************************************************/
/* Author  : Ahmed Magdy									*/
/* Date    : 5/11/2023										*/
/* Version : V01											*/
/************************************************************/

#include <LIB/MemMap.h>
#include <LIB/STD_TYPES.h>
#include <LIB/BIT_MATH.h>
#include "GPIO_interface.h"
#include "GPIO_private.h"
#include "GPIO_config.h"


void GPIO_voidSetPinDirection (u8 copy_u8PORT , u8 copy_u8PIN , u8 copy_u8MODE)
{
	switch(copy_u8PORT)
	{
		case GPIOA:
				if (copy_u8PIN <= 7)
				{
					GPIOA_CRL &= ~((0b1111) << (copy_u8PIN*4));
					GPIOA_CRL |= ((copy_u8MODE) << (copy_u8PIN*4));
				}
				else if (copy_u8PIN <=15)
				{
					copy_u8PIN -= 8;
					GPIOA_CRH &= ~((0b1111) << (copy_u8PIN*4));
					GPIOA_CRH |= ((copy_u8MODE) << (copy_u8PIN*4));
				}
		break;

		case GPIOB:
				if (copy_u8PIN <= 7)
				{
					GPIOB_CRL &= ~((0b1111) << (copy_u8PIN*4));
					GPIOB_CRL |= ((copy_u8MODE) << (copy_u8PIN*4));
				}
				else if (copy_u8PIN <=15)
				{
					copy_u8PIN -= 8;
					GPIOB_CRH &= ~((0b1111) << (copy_u8PIN*4));
					GPIOB_CRH |= ((copy_u8MODE) << (copy_u8PIN*4));
				}


		break;

		case GPIOC:
				if (copy_u8PIN >=13 && copy_u8PIN <=15)
				{
					copy_u8PIN -= 8;
					GPIOC_CRH &= ~((0b1111) << (copy_u8PIN*4));
					GPIOC_CRH |= ((copy_u8MODE) << (copy_u8PIN*4));
				}

		break;
	}
}

void GPIO_voidSetPinValue (u8 copy_u8PORT , u8 copy_u8PIN , u8 copy_u8VALUE)
{
	switch(copy_u8PORT)
	{
		case GPIOA:
				if (copy_u8VALUE == GPIO_HIGH)
				{	//using BSRR
					//SET_BIT(GPIOA_ODR , copy_u8PIN);
					GPIOA_BSRR = (1 << copy_u8PIN);
				}
				else
				{
					//using BRR
					//CLR_BIT(GPIOA_ODR , copy_u8PIN);
					GPIOA_BRR = (1 << copy_u8PIN);
				}
		break;

		case GPIOB:
				if (copy_u8VALUE == GPIO_HIGH)
				{
					//using BSRR
					//SET_BIT(GPIOB_ODR , copy_u8PIN);
					GPIOB_BSRR = (1 << copy_u8PIN);
				}
				else
				{
					//using BRR
					//CLR_BIT(GPIOB_ODR , copy_u8PIN);
					GPIOB_BRR = (1 << copy_u8PIN);
				}

		break;

		case GPIOC:
				if (copy_u8VALUE == GPIO_HIGH)
				{
					//using BSRR
					//SET_BIT(GPIOC_ODR , copy_u8PIN);
					GPIOC_BSRR = (1 << copy_u8PIN);
				}
				else
				{
					//using BRR
					//CLR_BIT(GPIOC_ODR , copy_u8PIN);
					GPIOC_BRR = (1 << copy_u8PIN);
				}

		break;
	}
}
u8 MGPIO_voidGetPinValue (u8 copy_u8PORT , u8 copy_u8PIN)
{
	u8 LOC_u8Result = 0;
	switch(copy_u8PORT)
	{
		case GPIOA:
			LOC_u8Result = GET_BIT (GPIOA_IDR , copy_u8PIN);
		break;

		case GPIOB:
			LOC_u8Result = GET_BIT (GPIOA_IDR , copy_u8PIN);
		break;

		case GPIOC:
			LOC_u8Result = GET_BIT (GPIOA_IDR , copy_u8PIN);
		break;
	}
	return LOC_u8Result;
}



void GPIO_voidLockPin (u8 copy_u8PORT , u8 copy_u8PIN)
{
	switch(copy_u8PORT)
	{
		case GPIOA:
		GPIOA_LCKR = (1 << copy_u8PIN);
		break;

		case GPIOB:
		GPIOB_LCKR = (1 << copy_u8PIN);
		break;

		case GPIOC:
		GPIOC_LCKR = (1 << copy_u8PIN);
		break;
	}
}

void GPIO_voidUnLockPin (u8 copy_u8PORT , u8 copy_u8PIN)
{
	switch(copy_u8PORT)
	{
		case GPIOA:
		GPIOA_LCKR = (0 << copy_u8PIN);
		break;

		case GPIOB:
		GPIOB_LCKR = (0 << copy_u8PIN);
		break;

		case GPIOC:
		GPIOC_LCKR = (0 << copy_u8PIN);
		break;
	}
}
