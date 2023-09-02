/******************************************************************************
 *
 * Module: Common - Platform Types Abstraction
 *
 * File Name: status_leds.h
 *
 * Description: types for AVR
 *
 * Date Created: 2/9/2023
 *
 * Author: Moustafa Ahmed
 *
 *******************************************************************************/

#ifndef HAL_HEADER_STATUS_LEDS_H_
#define HAL_HEADER_STATUS_LEDS_H_

/**-------------------------INCLUDES Section------------------------**/

#include "../../Libraries/std_types.h"

/**-------------------------Definitions & Config Section------------**/

#define GREEN_LED_PORT_ID	PORTD_ID
#define YELLOW_LED_PORT_ID	PORTD_ID
#define RED_LED_PORT_ID		PORTD_ID
#define GREEN_LED_PIN_ID	PIN3_ID
#define YELLOW_LED_PIN_ID	PIN4_ID
#define RED_LED_PIN_ID		PIN5_ID

/**-------------------------Enum Section----------------------------**/

typedef enum
{
	Green_LED, Yellow_LED, Red_LED
}Led_State;

/**-------------------------Function Dec. Section-------------------**/
/*
 * Description:
 * Initializing LEDS
 */
void Status_LEDS_Init(void);
/* ---------------------------------------- */

/*
 * Description:
 * Activating the required color
 */
void Status_LEDS_Color(Led_State COLOR);
/**-------------------------END-------------------------------------**/
#endif /* HAL_HEADER_STATUS_LEDS_H_ */

