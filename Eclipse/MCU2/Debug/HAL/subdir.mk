################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/DcMotor.c \
../HAL/LCD.c \
../HAL/Servo_Motor.c \
../HAL/buzzer.c \
../HAL/potentiometer.c \
../HAL/status_leds.c 

OBJS += \
./HAL/DcMotor.o \
./HAL/LCD.o \
./HAL/Servo_Motor.o \
./HAL/buzzer.o \
./HAL/potentiometer.o \
./HAL/status_leds.o 

C_DEPS += \
./HAL/DcMotor.d \
./HAL/LCD.d \
./HAL/Servo_Motor.d \
./HAL/buzzer.d \
./HAL/potentiometer.d \
./HAL/status_leds.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/%.o: ../HAL/%.c HAL/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


