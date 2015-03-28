################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Blitzdings.cpp 

CPP_DEPS += \
./Blitzdings.cpp.d 

LINK_OBJ += \
./Blitzdings.cpp.o 


# Each subdirectory must supply rules for building sources it contributes
Blitzdings.cpp.o: ../Blitzdings.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=158 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR     -I"C:\Users\Christoph\git\Libraries\FastLED" -I"C:\Users\Christoph\git\Libraries\Core" -I"C:\Users\Christoph\git\Libraries\Variant" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '


