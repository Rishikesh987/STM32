################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../BSW/CAN/Src/CAN_Transmit.c \
../BSW/CAN/Src/CanDriver.c \
../BSW/CAN/Src/Can_dbc_cgf.c 

OBJS += \
./BSW/CAN/Src/CAN_Transmit.o \
./BSW/CAN/Src/CanDriver.o \
./BSW/CAN/Src/Can_dbc_cgf.o 

C_DEPS += \
./BSW/CAN/Src/CAN_Transmit.d \
./BSW/CAN/Src/CanDriver.d \
./BSW/CAN/Src/Can_dbc_cgf.d 


# Each subdirectory must supply rules for building sources it contributes
BSW/CAN/Src/%.o BSW/CAN/Src/%.su BSW/CAN/Src/%.cyclo: ../BSW/CAN/Src/%.c BSW/CAN/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_PWR_LDO_SUPPLY -DUSE_HAL_DRIVER -DSTM32H723xx -c -I../Core/Inc -I"D:/STM32/OTA/SW/MY_BTL/APPLICATION/BSW/CAN/Inc" -I../Drivers/STM32H7xx_HAL_Driver/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-BSW-2f-CAN-2f-Src

clean-BSW-2f-CAN-2f-Src:
	-$(RM) ./BSW/CAN/Src/CAN_Transmit.cyclo ./BSW/CAN/Src/CAN_Transmit.d ./BSW/CAN/Src/CAN_Transmit.o ./BSW/CAN/Src/CAN_Transmit.su ./BSW/CAN/Src/CanDriver.cyclo ./BSW/CAN/Src/CanDriver.d ./BSW/CAN/Src/CanDriver.o ./BSW/CAN/Src/CanDriver.su ./BSW/CAN/Src/Can_dbc_cgf.cyclo ./BSW/CAN/Src/Can_dbc_cgf.d ./BSW/CAN/Src/Can_dbc_cgf.o ./BSW/CAN/Src/Can_dbc_cgf.su

.PHONY: clean-BSW-2f-CAN-2f-Src

