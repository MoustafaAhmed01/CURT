################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/ADC.c \
../MCAL/GPIO.c \
../MCAL/TIMER.c \
../MCAL/UART.c \
../MCAL/interrupt.c \
../MCAL/twi.c 

OBJS += \
./MCAL/ADC.o \
./MCAL/GPIO.o \
./MCAL/TIMER.o \
./MCAL/UART.o \
./MCAL/interrupt.o \
./MCAL/twi.o 

C_DEPS += \
./MCAL/ADC.d \
./MCAL/GPIO.d \
./MCAL/TIMER.d \
./MCAL/UART.d \
./MCAL/interrupt.d \
./MCAL/twi.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/%.o: ../MCAL/%.c MCAL/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


