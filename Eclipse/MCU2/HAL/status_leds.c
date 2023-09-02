/******************************************************************************
 *
 * Module: Common - Platform Types Abstraction
 *
 * File Name: status_leds.c
 *
 * Description: types for AVR
 *
 * Date Created: 2/9/2023
 *
 * Author: Moustafa Ahmed
 *
 *******************************************************************************/

/**-------------------------INCLUDES Section------------------------**/
#include "Header/status_leds.h"
#include "../Libraries/Libraries.h"
#include "../MCAL/Header/GPIO.h"
/**-------------------------Global Section--------------------------**/

/**-------------------------Definitions & Config Section------------**/

/**-------------------------Function Definition Section-------------**/
/*
 * Description:
 * Initializing LEDS
 */
void Status_LEDS_Init(void)
{
	/* Initializing PINS direction */
	GPIO_setupPinDirection(GREEN_LED_PORT_ID, GREEN_LED_PIN_ID, PIN_OUTPUT);
	GPIO_setupPinDirection(YELLOW_LED_PORT_ID, YELLOW_LED_PIN_ID, PIN_OUTPUT);
	GPIO_setupPinDirection(RED_LED_PORT_ID, RED_LED_PIN_ID, PIN_OUTPUT);

	/* Initializing to ZERO */
	GPIO_writePin(GREEN_LED_PORT_ID, GREEN_LED_PIN_ID, LOGIC_LOW);
	GPIO_writePin(YELLOW_LED_PORT_ID, YELLOW_LED_PIN_ID, LOGIC_LOW);
	GPIO_writePin(RED_LED_PORT_ID, RED_LED_PIN_ID, LOGIC_LOW);
}
/* ---------------------------------------- */

/*
 * Description:
 * Activating the required color
 */
void Status_LEDS_Color(Led_State COLOR)
{
	/* Activate the Required LED */
	if(Green_LED == COLOR)
	{
		GPIO_writePin(GREEN_LED_PORT_ID, GREEN_LED_PIN_ID, LOGIC_HIGH);
		GPIO_writePin(YELLOW_LED_PORT_ID, YELLOW_LED_PIN_ID, LOGIC_LOW);
		GPIO_writePin(RED_LED_PORT_ID, RED_LED_PIN_ID, LOGIC_LOW);
	}
	else if(Yellow_LED == COLOR)
	{
		GPIO_writePin(GREEN_LED_PORT_ID, GREEN_LED_PIN_ID, LOGIC_LOW);
		GPIO_writePin(YELLOW_LED_PORT_ID, YELLOW_LED_PIN_ID, LOGIC_HIGH);
		GPIO_writePin(RED_LED_PORT_ID, RED_LED_PIN_ID, LOGIC_LOW);
	}
	else
	{
		GPIO_writePin(GREEN_LED_PORT_ID, GREEN_LED_PIN_ID, LOGIC_LOW);
		GPIO_writePin(YELLOW_LED_PORT_ID, YELLOW_LED_PIN_ID, LOGIC_LOW);
		GPIO_writePin(RED_LED_PORT_ID, RED_LED_PIN_ID, LOGIC_HIGH);
	}
}

/**---------------------------------END-----------------------------**/

