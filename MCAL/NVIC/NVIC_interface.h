/*
 * NVICE_interface.h
 *
 *  Created on: Nov 6, 2023
 *      Author: M3gZ
 */

#ifndef MCAL_NVIC_NVIC_INTERFACE_H_
#define MCAL_NVIC_NVIC_INTERFACE_H_

void MNVIC_voidInitNVIC(void);
void MNVIC_voidEnableInterrupt (u8 Copy_u8IntNumber);
void MNVIC_voidDisableInterrupt(u8 Copy_u8IntNumber);
void MNVIC_voidSetPendingFlag  (u8 Copy_u8IntNumber);
void MNVIC_voidClearPendingFlag(u8 Copy_u8IntNumber);
u8   MNVIC_u8GetActiveFlag     (u8 Copy_u8IntNumber);
void MNVIC_voidSetPriority(s8 copy_s8IntID,u8 copy_u8GroupPriority,u8 copy_u8SubPriority);
//void MNVIC_voidSetPriority(s8 copy_s8IntID,u8 copy_u8GroupPriority);


#endif /* MCAL_NVIC_NVIC_INTERFACE_H_ */
