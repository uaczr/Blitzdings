################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../libraries/fastled/FastLED.cpp \
../libraries/fastled/colorpalettes.cpp \
../libraries/fastled/colorutils.cpp \
../libraries/fastled/hsv2rgb.cpp \
../libraries/fastled/lib8tion.cpp \
../libraries/fastled/noise.cpp \
../libraries/fastled/power_mgt.cpp 

CPP_DEPS += \
./libraries/fastled/FastLED.cpp.d \
./libraries/fastled/colorpalettes.cpp.d \
./libraries/fastled/colorutils.cpp.d \
./libraries/fastled/hsv2rgb.cpp.d \
./libraries/fastled/lib8tion.cpp.d \
./libraries/fastled/noise.cpp.d \
./libraries/fastled/power_mgt.cpp.d 

LINK_OBJ += \
./libraries/fastled/FastLED.cpp.o \
./libraries/fastled/colorpalettes.cpp.o \
./libraries/fastled/colorutils.cpp.o \
./libraries/fastled/hsv2rgb.cpp.o \
./libraries/fastled/lib8tion.cpp.o \
./libraries/fastled/noise.cpp.o \
./libraries/fastled/power_mgt.cpp.o 


# Each subdirectory must supply rules for building sources it contributes
libraries/fastled/FastLED.cpp.o: ../libraries/fastled/FastLED.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=158 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR     -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\core" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\variants" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\fastled" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

libraries/fastled/colorpalettes.cpp.o: ../libraries/fastled/colorpalettes.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=158 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR     -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\core" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\variants" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\fastled" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

libraries/fastled/colorutils.cpp.o: ../libraries/fastled/colorutils.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=158 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR     -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\core" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\variants" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\fastled" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

libraries/fastled/hsv2rgb.cpp.o: ../libraries/fastled/hsv2rgb.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=158 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR     -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\core" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\variants" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\fastled" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

libraries/fastled/lib8tion.cpp.o: ../libraries/fastled/lib8tion.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=158 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR     -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\core" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\variants" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\fastled" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

libraries/fastled/noise.cpp.o: ../libraries/fastled/noise.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=158 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR     -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\core" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\variants" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\fastled" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

libraries/fastled/power_mgt.cpp.o: ../libraries/fastled/power_mgt.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:/Program Files (x86)/Arduino/hardware/tools/avr/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=158 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR     -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\core" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\variants" -I"C:\Users\Christoph\git\Blitzdings\Blitzdings\libraries\fastled" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '


