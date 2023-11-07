/*****************************************RCC*********************************************/
/*****************************************RCC*********************************************/
/*****************************************RCC*********************************************/
/*  System Buses  */
#define RCC_AHB   0
#define RCC_APB1  1
#define RCC_APB2  2
/*  Clock Source  */
#define RCC_HSE_CRYSTAL    0
#define RCC_HSE_RCC        1
#define RCC_HSI            2
#define RCC_PLL            3
/*  PLL Input  */
#define HSI_DIV_2       0
#define HSE_DIV_2       1
#define HSE             2
/*****************************************RCC_REGISTER**********************************/
#define RCC_BASE_ADD		(0x40021000)

#define RCC_CR  			*((volatile u32*)(RCC_BASE_ADD+0x00))
#define RCC_CFGR  			*((volatile u32*)(RCC_BASE_ADD+0x04))
#define RCC_CIR  			*((volatile u32*)(RCC_BASE_ADD+0x08))
#define RCC_APB2RSTR  		*((volatile u32*)(RCC_BASE_ADD+0x0c))
#define RCC_APB1RSTR  		*((volatile u32*)(RCC_BASE_ADD+0x10))
#define RCC_AHBENR  		*((volatile u32*)(RCC_BASE_ADD+0x14))
#define RCC_APB2ENR  		*((volatile u32*)(RCC_BASE_ADD+0x18))
#define RCC_APB1ENR 		*((volatile u32*)(RCC_BASE_ADD+0x1c))
#define RCC_BDCR  			*((volatile u32*)(RCC_BASE_ADD+0x20))
#define RCC_CSR  			*((volatile u32*)(RCC_BASE_ADD+0x24))

/************************Peripheral ID  APB2********************************/
#define RCC_AFIO			0
#define RCC_EXTI			1
#define RCC_GPIO_PortA		2
#define RCC_GPIO_PortB		3
#define RCC_GPIO_PortC		4
#define RCC_GPIO_PortD		5
#define RCC_GPIO_PortE		6
#define RCC_GPIO_PortF		7
#define RCC_GPIO_PortG		8
#define RCC_ADC1			9
#define RCC_ADC2			10
#define RCC_TIM1_timer		11
#define RCC_SPI1			12
#define RCC_TIM8_timer		13
#define RCC_USART1			14
#define RCC_ADC3			15
#define RCC_TIM9_timer		17
#define RCC_TIM10_timer		18
#define RCC_TIM11_timer		19
/************************Peripheral ID  AHB********************************/

#define RCC_SDIO						0
#define RCC_DMA1						2
#define RCC_DMA2						3
#define RCC_RESET_CLOCK_CONTROL_RCC		5
#define	RCC_FLASH_MEM_INTERFACE			7
#define	RCC_CRC							8
#define	RCC_ETHERNET					10
#define	RCC_USB_OTG_FS					12
#define	RCC_FSMC						13

/************************Peripheral ID  APB1********************************/
#define RCC_TIM2_TIMER						0
#define RCC_TIM3_TIMER						1
#define RCC_TIM4_TIMER						2
#define RCC_TIM5_TIMER						3
#define RCC_TIM6_TIMER						4
#define RCC_TIM7_TIMER						5
#define RCC_TIM12_TIMER						6
#define RCC_TIM13_TIMER						7
#define RCC_TIM14_TIMER						8
#define RCC_RTC								10
#define RCC_WINDOW_WATCHDOG					11
#define RCC_INDEPENDENT_WATCHDOG 			12
#define RCC_SPI2_I2S						14
#define RCC_SPI3_I2S						15
#define RCC_USART2							17
#define RCC_USART3							18
#define RCC_UART4							19
#define RCC_UART5							20
#define RCC_I2C1							21
#define RCC_I2C2							22
#define RCC_USB_DEVICE_FS_REG				23
#define RCC_SHARED_USB_CAN_SRAM_512_BYTES	24
#define RCC_BXCAN2							25
#define RCC_BXCAN1							26
#define RCC_BACKUP_REGISTERS(BKP)			27
#define RCC_POWER_CONTROL_PWR				28
#define RCC_DAC								29
/*****************************************************************************************/
/*****************************************************************************************/
/*****************************************************************************************/


/*****************************************GPIO*********************************************/
/*****************************************GPIO*********************************************/
/*****************************************GPIO*********************************************/
/* definning the BASE addresses of ports A,B,C that exists in our MC */
#define GPIOA_BASE_ADDRESS					0x40010800
#define GPIOB_BASE_ADDRESS					0x40010C00
#define GPIOC_BASE_ADDRESS					0x40011000

				/* defining Port A registers */
#define GPIOA_CRL					*((u32*) (GPIOA_BASE_ADDRESS + 0x00))
#define GPIOA_CRH					*((u32*) (GPIOA_BASE_ADDRESS + 0x04))
#define GPIOA_IDR					*((u32*) (GPIOA_BASE_ADDRESS + 0x08))
#define GPIOA_ODR					*((u32*) (GPIOA_BASE_ADDRESS + 0x0C))
#define GPIOA_BSRR					*((u32*) (GPIOA_BASE_ADDRESS + 0x10))
#define GPIOA_BRR					*((u32*) (GPIOA_BASE_ADDRESS + 0x14))
#define GPIOA_LCKR					*((u32*) (GPIOA_BASE_ADDRESS + 0x18))
				/* defining Port B registers */
#define GPIOB_CRL					*((u32*) (GPIOB_BASE_ADDRESS + 0x00))
#define GPIOB_CRH					*((u32*) (GPIOB_BASE_ADDRESS + 0x04))
#define GPIOB_IDR					*((u32*) (GPIOB_BASE_ADDRESS + 0x08))
#define GPIOB_ODR					*((u32*) (GPIOB_BASE_ADDRESS + 0x0C))
#define GPIOB_BSRR					*((u32*) (GPIOB_BASE_ADDRESS + 0x10))
#define GPIOB_BRR					*((u32*) (GPIOB_BASE_ADDRESS + 0x14))
#define GPIOB_LCKR					*((u32*) (GPIOB_BASE_ADDRESS + 0x18))
				/* defining Port C registers */
#define GPIOC_CRL					*((u32*) (GPIOC_BASE_ADDRESS + 0x00))
#define GPIOC_CRH					*((u32*) (GPIOC_BASE_ADDRESS + 0x04))
#define GPIOC_IDR					*((u32*) (GPIOC_BASE_ADDRESS + 0x08))
#define GPIOC_ODR					*((u32*) (GPIOC_BASE_ADDRESS + 0x0C))
#define GPIOC_BSRR					*((u32*) (GPIOC_BASE_ADDRESS + 0x10))
#define GPIOC_BRR					*((u32*) (GPIOC_BASE_ADDRESS + 0x14))
#define GPIOC_LCKR					*((u32*) (GPIOC_BASE_ADDRESS + 0x18))
/*****************************************************************************************/
/*****************************************************************************************/
/*****************************************************************************************/

/*****************************************NVIC*********************************************/
/*****************************************NVIC*********************************************/
/*****************************************NVIC*********************************************/
/*    base_address 0xE000E100          Rigisters Definitions                                  */

// Base Address
#define NVIC_BASE_ADDRESS 0xE000E100

/* Set Interrupt Register */
#define NVIC_ISER0      *((volatile u32 *)(NVIC_BASE_ADDRESS + 0x000))
#define NVIC_ISER1      *((volatile u32 *)(NVIC_BASE_ADDRESS + 0x004))
#define NVIC_ISER2      *((volatile u32 *)(NVIC_BASE_ADDRESS + 0x008))

/* Clear Interrupt Register */
#define NVIC_ICER0      *((volatile u32 *)(NVIC_BASE_ADDRESS + 0x080))
#define NVIC_ICER1      *((volatile u32 *)(NVIC_BASE_ADDRESS + 0x084))
#define NVIC_ICER2      *((volatile u32 *)(NVIC_BASE_ADDRESS + 0x088))

/* Set Pending Register */
#define NVIC_ISPR0      *((volatile u32 *)(NVIC_BASE_ADDRESS + 0x100))
#define NVIC_ISPR1      *((volatile u32 *)(NVIC_BASE_ADDRESS + 0x104))
#define NVIC_ISPR2      *((volatile u32 *)(NVIC_BASE_ADDRESS + 0x108))

/* Clear Pending Register */
#define NVIC_ICPR0      *((volatile u32 *)(NVIC_BASE_ADDRESS + 0x180))
#define NVIC_ICPR1      *((volatile u32 *)(NVIC_BASE_ADDRESS + 0x184))
#define NVIC_ICPR2      *((volatile u32 *)(NVIC_BASE_ADDRESS + 0x188))

/* Interrupt Active Bit Register */
#define NVIC_IABR0      *((volatile u32 *)(NVIC_BASE_ADDRESS + 0x200))
#define NVIC_IABR1      *((volatile u32 *)(NVIC_BASE_ADDRESS + 0x204))
#define NVIC_IABR2      *((volatile u32 *)(NVIC_BASE_ADDRESS + 0x208))

// SCB Reg
#define SCB_AIRCR       *((volatile u32 *) 0xE000ED0C )
// Interrupt
#define NVIC_IPR0       ((volatile u8 *)(0xE000E100 + 0x300))
#define NVIC_IPR2       ((volatile u8 *)(0xE000E100 + 0x320))
/*****************************************************************************************/
/*****************************************************************************************/
/*****************************************************************************************/
