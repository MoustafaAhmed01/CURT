Certainly, here is the system description you provided rewritten for inclusion in a README file for a GitHub repository:

---

## AVR Microcontroller-Based Temperature Control System

![System Diagram](system_diagram.png)

### System Description

#### MCU1:

**Components:**
- Push Button
- Temperature Sensor
- DC Motor (as a fan)

**Description:**
1. MCU1 reads the state from the internal EEPROM before reading the temperature to determine if there is an abnormal state.
2. MCU1 reads the temperature and stores the state as "normal" initially in EEPROM. It then adjusts the speed of the fan (DC motor) based on the current state and sends the temperature reading to MCU2 using UART.
3. If the user presses the push button and the temperature is between 40°C and 50°C, MCU1 sends a code to MCU2 via UART to shut down the machine.

#### MCU2:

**Components:**
- Servo Motor
- 3 LEDs
- Potentiometer
- DC Motor (as the machine)
- Buzzer

**Description:**
1. MCU2 receives messages via UART from MCU1 and takes appropriate actions based on the received data.
2. The potentiometer controls the speed of the machine (DC motor).

### System States:

**1) Normal State:**
- If the temperature is lower than 20°C, MCU1 will stop the fan, and MCU2 will illuminate the green LED.
- Between 20°C and 40°C, MCU1 adjusts the fan speed according to the increasing temperature, reaching maximum speed at 40°C. MCU2 illuminates the yellow LED.
- Between 40°C and 50°C, MCU1 operates the fan at maximum speed, and MCU2 lights a red LED while stopping the machine when the push button is pressed.
- Temperatures greater than 50°C trigger an emergency state in both MCU1 and MCU2.

**2) Emergency State:**
- In this state, the system starts counting time.
- MCU1 operates the fan at maximum speed.
- MCU2 illuminates the red LED and activates the buzzer.

**3) Abnormal State:**
- MCU1 operates the fan at maximum speed.
- MCU2 illuminates the red LED, opens the servo to 90 degrees, stops the machine, and activates the buzzer.

If the emergency state is activated for 7 seconds (using a timer with overflow mode to check the temperature 14 times with a period of 500ms), follow these steps:
1. Write the abnormal state in the EEPROM.
2. MCU1 activates the watchdog timer with the smallest time to reset MCU1.
3. MCU2 monitors the abnormal condition for 5 seconds.
