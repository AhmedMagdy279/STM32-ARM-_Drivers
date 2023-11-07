/*************************************************************************/
/*	Author : Ahmed Magdy												*/
/*	Date   : 5/11/2023												   */
/*	Version: V01													  */
/*********************************************************************/

#ifndef _RCC_CONFIG_H
#define _RCC_CONFIG_H

/* Intiating system clock function based on the user's selection */
/* case 1 RCC_HSI 		: (default) internal high speed clock   */
/* case 2 RCC_HSE 		:  HSE clock 					    	*/
/* case 3 RCC_HSEBYP 	:  HSEBYP clock 				    	*/
/* case 4 RCC_PLL	    :  PLL clock enable				        */
#define RCC_SYSCLK				RCC_HSE				/* default set on case 1 */


/* HSI trimming  */
/* case RCC_HSI_POS :   ( range 17 => 32 ) increase trimming by 40 kHz for each step */
/* case RCC_HSI_NEG :   ( range 0 =>  15 ) decrease trimming by 40 kHz for each step */
#if RCC_SYSCLK == RCC_HSI
#define RCC_SYSCLK_HSITRIM 		RCC_HSI_NOTRIM			/* default set for no trimming*/
#endif

/* PLL Multiplication factor  */
/* case = 2  : input clock x2    */
/* case = 3  : input clock x3    */
/* case = 4  : input clock x4    */
/* case = 5  : input clock x5    */
/* case = 6  : input clock x6    */
/* case = 7  : input clock x7    */
/* case = 8  : input clock x8    */
/* case = 9  : input clock x9    */
/* case = 10 : input clock x10   */
/* case = 11 : input clock x11   */
/* case = 12 : input clock x12   */
/* case = 13 : input clock x13   */
/* case = 14 : input clock x14   */
/* case = 15 : input clock x15   */
/* case = 16 : input clock x16   */
#if RCC_SYSCLK == RCC_PLL
#define RCC_SYSCLK_PLLMULL			1			/* default set by 1 for no multiplication*/
#define RCC_SYSCLK_PLL_IN			RCC_HSI_2	/* options => RCC_HSI_2 divided by 2     default
														   => RCC_HSE_2 divided by 2
														   => RCC_HSE 					 */
#endif


/* For HSE */
#if RCC_SYSCLK == RCC_HSE
#define RCC_SYSCLK_CSS				0			/* default not working. Change it to 1 if you desire */
#endif


/****************************************************************/



#endif
