/*
 * LED_PROGRAM.c
 *
 *  Created on: Feb 4, 2022
 *      Author: abdalah
 */
#include "primitive_data_types.h"
#include "DIO_interface.h"
#include "LED_PRIVET.h"

uint8_t LED_INIT(uint8_t PORT ,uint8_t PIN)
{
	uint8_t error_state = Init_value ;
	              /*change pin statues to output*/
	        error_state=DIO_SetPinDirection(PORT ,PIN ,OUTPUT);

}



uint8_t LED_HighOrLow(uint8_t PORT ,uint8_t pin ,uint8_t statues)
{
	uint8_t error_state=Init_value;
	                 /*change LED statues*/
	error_state= DIO_SetPinValue(PORT,pin,statues);




}
