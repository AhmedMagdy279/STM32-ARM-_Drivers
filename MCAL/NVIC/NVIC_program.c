/************************************************************/
/* Author  : Ahmed Magdy									*/
/* Date    : 6/11/2023										*/
/* Version : V01											*/
/************************************************************/

#include <LIB/MemMap.h>
#include <LIB/STD_TYPES.h>
#include <LIB/BIT_MATH.h>
#include "NVIC_interface.h"
#include "NVIC_private.h"
#include "NVIC_config.h"


void MNVIC_voidInitNVIC(void){
	#if(MNVIC_PRIORITY_CONFIG==GROUP16_SUB0)
	{
		SCB_AIRCR=GROUP16_SUB0;
	}
	#elif(MNVIC_PRIORITY_CONFIG==GROUP8_SUB2)
	{
		SCB_AIRCR=GROUP8_SUB2;
	}
	#elif(MNVIC_PRIORITY_CONFIG==GROUP4_SUB4)
	{
		SCB_AIRCR = GROUP4_SUB4;
	}
	#elif(MNVIC_PRIORITY_CONFIG==GROUP2_SUB8)
	{
		SCB_AIRCR=GROUP2_SUB8;
	}
	#elif(MNVIC_PRIORITY_CONFIG==GROUP0_SUB16)
	{
		SCB_AIRCR=GROUP0_SUB16;
	}
	#endif
}

void MNVIC_voidEnableInterrupt(u8 Copy_u8IntNumber)
{

	if(Copy_u8IntNumber<=31){
		NVIC_ISER0=(1<<Copy_u8IntNumber);
	}
	else if(Copy_u8IntNumber<=59){
		Copy_u8IntNumber=Copy_u8IntNumber-32;
		NVIC_ISER1=(1<<Copy_u8IntNumber);
	}
	else {
		/*return error*/
	}


}
void MNVIC_voidDisableInterrupt(u8 Copy_u8IntNumber)
{

	if(Copy_u8IntNumber<=31){
		NVIC_ICER0=(1<<Copy_u8IntNumber);
	}
	else if(Copy_u8IntNumber<=59){
		Copy_u8IntNumber=Copy_u8IntNumber-32;
		NVIC_ICER1=(1<<Copy_u8IntNumber);
	}
	else {
		/*return error*/
	}


}

void MNVIC_voidSetPendingFlag(u8 Copy_u8IntNumber)
{

	if(Copy_u8IntNumber<=31){
		NVIC_ISPR0=(1<<Copy_u8IntNumber);
	}
	else if(Copy_u8IntNumber<=59){
		Copy_u8IntNumber=Copy_u8IntNumber-32;
		NVIC_ISPR1=(1<<Copy_u8IntNumber);
	}
	else {
		/*return error*/
	}

}

void MNVIC_voidClearPendingFlag(u8 Copy_u8IntNumber)
{

	if(Copy_u8IntNumber<=31){
		NVIC_ICPR0=(1<<Copy_u8IntNumber);
	}
	else if(Copy_u8IntNumber<=59){
		Copy_u8IntNumber=Copy_u8IntNumber-32;
		NVIC_ICPR1=(1<<Copy_u8IntNumber);
	}
	else {
		/*return error*/
	}

}

u8 MNVIC_u8GetActiveFlag(u8 Copy_u8IntNumber)
{
	u8 Local_u8Result=-1;
	if(Copy_u8IntNumber<=31){
		Local_u8Result=GET_BIT(NVIC_IABR0,Copy_u8IntNumber);
	}
	else if(Copy_u8IntNumber<=59){
		Copy_u8IntNumber=Copy_u8IntNumber-32;
		Local_u8Result=GET_BIT(NVIC_IABR1,Copy_u8IntNumber);
	}
	else {
		/*return error*/
	}
	return  Local_u8Result;
}

void MNVIC_voidSetPriority(s8 copy_s8IntID,u8 copy_u8GroupPriority,u8 copy_u8SubPriority)
{
	u8 Local_u8Priority = (copy_u8SubPriority|copy_u8GroupPriority<<((MNVIC_PRIORITY_CONFIG-0x05FA0300)/0x100));
																		// G4S4 (2)
	//																	//(G2s8) (3)
	// 0b0001 | 0b0011  => 0b0001 | 0b1100
	//xxyy
	// (0 1 | 1 1)

	// 0b0001 | 0b0011  => 0b0001 | 0b1000
	//xyyy
	//(1 | 001)
	/* External Interrupt  */
	if(copy_s8IntID>=0)
	{
		NVIC_IPR0[copy_s8IntID] = (Local_u8Priority<<4);
	}
}
