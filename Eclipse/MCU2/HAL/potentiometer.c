/******************************************************************************
 *
 * Module: Common - Platform Types Abstraction
 *
 * File Name: POTENTIOMETER.c
 *
 * Description: types for AVR
 *
 * Date Created: 2/9/2023
 *
 * Author: Moustafa Ahmed
 *
 *******************************************************************************/

/**-------------------------INCLUDES Section------------------------**/
#include "Header/potentiometer.h"
#include "../MCAL/Header/ADC.h"
/**-------------------------Function Definition Section-------------**/

/*
 * Description :
 * Function responsible for calculate the temperature from the ADC digital value.
 */
uint16 Potentiometer_getVal(void)
{
	uint16 a_potentiometer_value = 0;

	/* Read ADC channel where the temperature sensor is connected */
	a_potentiometer_value = ADC_readChannel(POTENTIOMETER_CHANNEL_ID);

	return a_potentiometer_value;
}
/**---------------------------------END-----------------------------**/
