/*************************************************************************/
/*	Author : Ahmed Magdy												*/
/*	Date   : 5/11/2023												   */
/*	Version: V01													  */
/*********************************************************************/

#include <LIB/MemMap.h>
#include <LIB/STD_TYPES.h>
#include <LIB/BIT_MATH.h>
#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"


void RCC_voidInitSysClock(void)
{
	#if RCC_SYSCLK == RCC_HSI
	RCC_CR	= 0x00000081;							/* enabling HSI bit and deafult trimming with 16 		 */
	RCC_CFGR= 0x00000000;							/* enabling HSI from SW            						 */
		#if RCC_SYSCLK_HSITRIM != RCC_HSI_NOTRIM
		//case 17 ...  32		  :
		//case 0  ...  15 	  :

		#endif


	#elif RCC_SYSCLK == RCC_HSE
	RCC_CR	= 0x00010000;										/* enabling HSE bit only            		*/
	RCC_CFGR= 0x00000001;										/* enabling HSE from SW            		    */
	u8 test_HSRDY=GET_BIT(RCC_CR , 17);
		#if RCC_SYSCLK_CSS ==1 && test_HSRDY==1   /* enabling CSS when HSERDY is 1 			*/
			RCC_CR	= 0x00090000;								/* and when the user enable CSS from config */
		#endif

	#elif RCC_SYSCLK == RCC_HSEBYP
	RCC_CR	= 0x00050000;							/* enabling HSE and HSEBYP bits    						 */
	RCC_CFGR= 0x00000001;							/* enabling HSE from SW            						 */

	#elif RCC_SYSCLK == RCC_PLL
	RCC_CR	= 0x01000000;							/* enabling PLL bit only		   						 */
		#if RCC_SYSCLK_PLL_IN == RCC_HSI_2
			RCC_CFGR= 0x00000002;					/* enabling PLL from SW with default using HSI/2 as source*/
		#elif RCC_SYSCLK_PLL_IN == RCC_HSE
			RCC_CFGR= 0x00010002;					/* enabling PLL from SW with using HSE as source		  */
		#elif RCC_SYSCLK_PLL_IN == RCC_HSE_2
			RCC_CFGR= 0x00030002;					/* enabling PLL from SW with using HSE/2 as source		  */
		#endif

		#if RCC_SYSCLK_PLLMULL != 1
			#if RCC_SYSCLK_PLLMULL == 2
					//case 2  :
			#elif RCC_SYSCLK_PLLMULL == 3
					//case 3  :
			#elif RCC_SYSCLK_PLLMULL == 4
					//case 4  :
			#elif RCC_SYSCLK_PLLMULL == 5
					//case 5  :
			#elif RCC_SYSCLK_PLLMULL == 6
					//case 6  :
			#elif RCC_SYSCLK_PLLMULL == 7
					//case 7  :
			#elif RCC_SYSCLK_PLLMULL == 8
					//case 8  :
			#elif RCC_SYSCLK_PLLMULL == 9
					//case 9  :
			#elif RCC_SYSCLK_PLLMULL == 10
					//case 10 :
			#elif RCC_SYSCLK_PLLMULL == 11
					//case 11 :
			#elif RCC_SYSCLK_PLLMULL == 12
					//case 12 :
			#elif RCC_SYSCLK_PLLMULL == 13
					//case 13 :
			#elif RCC_SYSCLK_PLLMULL == 14
					//case 14 :
			#elif RCC_SYSCLK_PLLMULL == 15
					//case 15 :
			#elif RCC_SYSCLK_PLLMULL == 16
					//case 16 :
			#endif
		#endif
	#else
		#error ("You choose wrong SYSCLK")
	#endif
}

void RCC_voidEnableClock ( u8 Copy_u8BusId, u8 Copy_u8PerphId )
{
	if (Copy_u8PerphId <= 31)
	{
		switch(Copy_u8BusId)
		{
			case RCC_AHB  : SET_BIT( RCC_AHBENR  , Copy_u8PerphId );	break;
			case RCC_APB1 : SET_BIT( RCC_APB1ENR , Copy_u8PerphId );	break;
			case RCC_APB2 : SET_BIT( RCC_APB2ENR , Copy_u8PerphId );	break;

			/*default 	  : return error 						break; */
		}
	}
	else
	{
		/* return error */
	}

}

void RCC_voidDisableClock ( u8 Copy_u8BusId, u8 Copy_u8PerphId )
{
	if (Copy_u8PerphId <= 31)
	{
		switch(Copy_u8BusId)
		{
			case RCC_AHB  : CLR_BIT( RCC_AHBENR  , Copy_u8PerphId );	break;
			case RCC_APB1 : CLR_BIT( RCC_APB1ENR , Copy_u8PerphId );	break;
			case RCC_APB2 : CLR_BIT( RCC_APB2ENR , Copy_u8PerphId );	break;

			/*default 	  :  return error						break; */
		}
	}
	else
	{
		/* return error */
	}

}
