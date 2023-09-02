/******************************************************************************
 *
 * Module: Common - Platform Types Abstraction
 *
 * File Name: Servo_Motor.h
 *
 * Description: types for AVR
 *
 * Date Created: 2/9/2023
 *
 * Author: Moustafa Ahmed
 *
 *******************************************************************************/

#ifndef HAL_HEADER_SERVO_MOTOR_H_
#define HAL_HEADER_SERVO_MOTOR_H_

/**-------------------------INCLUDES Section------------------------**/

#include "../../Libraries/std_types.h"

/**-------------------------Definitions & Config Section------------**/
// Define servo control parameters
#define SERVO_MIN_ANGLE 0   	/* Minimum servo angle (0 degrees) 			*/
#define SERVO_MAX_ANGLE 90 		/* Maximum servo angle (90 degrees)			*/
#define PWM_MIN         0 		/* Timer2 Compare Match Value for 0 degrees */
#define PWM_MAX         254 	/* Timer2 Compare Match Value for 90 degrees*/

/**-------------------------Enum Section----------------------------**/


/**-------------------------Function Dec. Section-------------------**/
/*
 * Description:
 * Activate Servo Motor
 */
void ServoMotor_Rotate(uint8 angle);


/**-------------------------END-------------------------------------**/
#endif /* HAL_HEADER_SERVO_MOTOR_H_ */

